//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();
//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 11342 - Three-square
	int n, k;
	cin >> n;
	int arr[50001][3];
	int sq = sqrt(50000);
	int c;
	for (int i = 0; i <= 50000; i++)
		arr[i][0] = -1;
	for (int i = 0; i <= sq; i++)
		for (int m = i; m <= sq; m++)
			for (int r = m; r <= sq; r++) {
				c = i * i + r * r + m * m;
				if (c <= 50000 && arr[c][0] == -1) {
					arr[c][0] = i;
					arr[c][1] = m;
					arr[c][2] = r;
				}
			}
	while (n--) {
		cin >> k;
		if (arr[k][0] != -1)
			cout << arr[k][0] << " " << arr[k][1] << " " << arr[k][2] << endl;
		else
			cout << -1 << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}

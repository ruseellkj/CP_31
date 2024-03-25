#include <bits/stdc++.h>
using namespace std;
using u32 = unsigned int;
using u64 = unsigned long long;
const int MAX = 200007;
const int MOD = 1000000007;
// *----------------------------------------------------------------------------*
/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define umii unordered_map<int,int>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define msi multiset<int>
#define msl multiset<long long>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sortrev(a) sort(a.rbegin(), a.rend())
#define prdouble(x) cout << fixed << setprecision(10) << x
#define done(x) {cout << x << endl; return;}
#define cinv(a) for(auto &i:a){cin>>i;}
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
// *---------------------------------------------------------------------------- *

int solve(int i, int j) {
	if (i == 1 || i == 10 || j == 1 || j == 10) {
		return 1;
	}
	else if (i == 2 || i == 9 || j == 2 || j == 9) {
		return 2;
	}
	else if (i == 3 || i == 8 || j == 3 || j == 8) {
		return 3;
	}
	else if (i == 4 || i == 7 || j == 4 || j == 7) {
		return 4;
	}
	else if (i == 5 || i == 6 || j == 5 || j == 6) {
		return 5;
	}
}
int main() {

	int t;
	cin >> t;
	while (t--) {
		char c[11][11];
		int ans = 0;
		for (int i = 1; i < 11; i++) {
			for (int j = 1; j < 11; j++) {
				cin >> c[i][j];
				if (c[i][j] == 'X') {
					ans += solve(i, j);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
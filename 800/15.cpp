#include <bits/stdc++.h>
using namespace std;
using u32 = unsigned int;
using u64 = unsigned long long;

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

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n ;
		cin >> n;
		vi a(n);
		cinv(a);
		int cnt_odd = 0;
		for (int i = 0; i < n; i++) {
			// check for odd
			if (a[i] % 2 != 0) {
				cnt_odd++;
			}
		}

		if (cnt_odd % 2 == 0) yes
			else no
			}
	return 0;
}
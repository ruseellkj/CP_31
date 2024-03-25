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
	ll t;
	cin >> t;
	while (t--) {
		ll a, b, c, d; //  −1e8 ≤ a,b,c,d ≤ 1e8
		cin >> a >> b >> c >> d; // (a,b) (c,d)

		if (d < b) { // below b
			cout << -1 << endl;
		}
		else if (a + d - b < c) { // same height
			cout << -1 << endl;
		}
		else {
			cout << (2 * (d - b) + a - c) << endl;
		}
	}
	return 0;
}
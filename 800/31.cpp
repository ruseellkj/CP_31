#include <bits/stdc++.h>
using namespace std;
using u32 = unsigned int;
using u64 = unsigned long long;

// *----------------------------------------------------------------------------*

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)

/* Control Flow */
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)

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

/* UTILS */
#define pb push_back
#define all(a) a.begin(), a.end()
#define sortrev(a) sort(a.rbegin(), a.rend())
#define prdouble(x) cout << fixed << setprecision(10) << x
#define done(x) {cout << x << endl; return;}
#define cinv(a) for(auto &i:a){cin>>i;}
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

/* CONSTANTS */
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9;

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/* HELPER FUNCTIONS */
bool odd(ll num) { return ((num & 1) == 1);}
bool even(ll num) { return ((num & 1) == 0);}

// *---------------------------------------------------------------------------- *
int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		int a, b;
		cin >> n >> a >> b;

		if (a + b >= n - 1) {
			if ( a == n && b == n) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
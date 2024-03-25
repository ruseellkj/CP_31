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
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k, x; // target = n, 1-k range, no x
		cin >> n >> k >> x;

		// x is not 1
		if (x != 1) {
			cout << "YES" << endl;
			cout << n << endl;
			for (int i = 0 ; i < n; i++) {
				cout << 1 << " ";
			}
			cout << endl;
		}
		// x is 1
		else {
			if (k == 1) {
				cout << "NO" << endl;
			}
			else {
				// k >=2
				if (n % 2 == 0) {
					cout << "YES" << endl;
					cout << n / 2 << endl;
					for (int i = 0; i < n / 2; i++) {
						cout << 2 << " ";
					}
					cout << endl;
				}
				else {
					// remember this -> we can make any odd number out of 2 and 3
					// (n/2 - 1) times 2 and 1 time 3
					if (k >= 3) {
						cout << "YES" << endl;
						cout << n / 2 << endl;
						for (int i = 0; i < n / 2 - 1; i++) {
							cout << 2 << " ";
						}
						cout << 3 << " ";
						cout << endl;
					}
					else {
						cout << "NO" << endl;
					}
				}
			}
		}
	}
	return 0;
}
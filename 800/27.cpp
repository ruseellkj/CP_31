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
		int n;
		cin >> n;
		int count = 0;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++) {
			if (arr[i] == 2) {
				// tc= 2 2 1 2 1 2
				// ct = 4
				count++;
			}
		}
		if (count % 2 == 1) {
			cout << -1 << endl;
		}
		else if (count == 0) {
			cout << 1 << endl;
		}
		else if (count % 2 == 0) {
			int k = count / 2;
			// new counter
			int _ = 0;
			int s;
			for (int i = 0; i < n; i++) {
				if (arr[i] == 2) {
					_++;
					if (_ == k) {
						s = i + 1;
						break;
					}
				}
			}
			cout << s << endl;
		}
	}
	return 0;
}
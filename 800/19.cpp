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
		int n;
		cin >> n;
		vi arr(n);

		int neg = 0;
		int pos = 0;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] == -1) {
				neg++;
			}
			else {
				pos++;
			}
		}

		if (neg <= pos) {
			if (neg % 2 != 0) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else {
			int ops = neg - n / 2;
			if (n / 2 % 2 != 0) {
				ops += 1;
			}

			cout << ops << endl;
		}
	}
	return 0;
}
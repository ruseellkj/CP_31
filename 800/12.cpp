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
		ll arr[n];
		vi a;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			// i > 0 then only
			if (i && a.back() > arr[i]) {
				a.push_back(1);
			}
			a.push_back(arr[i]);
		}

		cout << a.size() << endl;
		for (int j = 0; j < a.size(); j++) {
			cout << a[j] << " ";
		}
		cout << endl;

	}
	return 0;
}

// 5
// 1 7 9 5 7

// 1 7 9 4 5 7 <- ans


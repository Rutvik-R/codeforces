// Rutvik Ranpariya

#include <bits/stdc++.h>
using namespace std;

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#define int 								long long
#define rep(i , n) 							for (int i = 0; i < n; ++i)
#define ff 									first
#define ss 									second

void solve() {

	int n, m , dumi;

	cin >> n >> m;

	map<int , set<int>> mp;

	vector<int> arr(n);

	rep(i, n) {
		cin >> dumi;
		arr[i] = dumi;
		mp[dumi].insert(i);
	}

	int priv , ans = 0;
	set<int> s;

	for (auto x : mp) {
		s = x.ss;
		priv = -1;

		for (auto y : s) {
			if (y != priv) ans += (n - y) * (y + 1);
			else ans += (n - y);
			priv = y + 1;
		}

	}

	int i, x ;

	while (m--) {
		cin >> i >> x;
		i--;



		if (i != 0 && i != n - 1 && arr[i] == arr[i - 1] && arr[i] == arr[i + 1]) ans += (n - i - 1) * (i + 2) - 2 * (n - i) + 1;
		else if (i != 0 && arr[i] == arr[i - 1]) ans -= n - i;
		else if (i != n - 1 && arr[i] == arr[i + 1]) ans -= i + 1;
		else ans -= (n - i) * (i + 1);



		arr[i] = x ;

		if (i != 0 && i != n - 1 && arr[i] == arr[i + 1] && arr[i] == arr[i - 1]) ans += n - i + n - i - 1 - (n - i - 1) * (i + 2) ;
		else if (i != 0 && arr[i] == arr[i - 1]) ans += n - i ;
		else if ( i != n - 1 && arr[i] == arr[i + 1]) ans += i + 1 ;
		else ans += (n - i) * (i + 1);


		cout << ans << endl;
	}


}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve();

	return 0;
}



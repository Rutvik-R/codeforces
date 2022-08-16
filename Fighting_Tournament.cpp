// Rutvik Ranpariya

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i,n) for(int i=0 ; i<n ; i++)

void solve() {
	int n, q , dumi;

	cin >> n >> q;

	vector<int> arr(n + 1, 0);

	rep(i, n) {cin >> dumi; arr[dumi] = i + 1 ; }

	int i , k;
	while (q--) {
		int ans;
		cin >> i >> k;
		dumi = arr[n];
		for (int j = n; j ; j--)
		{
			if (arr[j] == i) break;
			dumi = min(dumi , arr[j]);
			if (dumi < i) break;
		}

		dumi = min(dumi , k + 2);

		if (i == 1) {
			if (dumi == 1) ans =  k  ;
			else if (dumi == 2) ans = 0 ;
			else ans = dumi - 2 ;

		}

		else {
			if (dumi == i) 	ans = k - i + 2 ;
			else if (dumi < i) ans = 0 ;
			else ans = dumi - i ;

		}
		if (ans < 0 ) cout << 0 << endl;
		else	cout << ans << endl;
	}


}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
		solve();
}



// Rutvik Ranpariya

#include <bits/stdc++.h>
using namespace std;


void solve() {

	int n, m;

	cin >> n >> m;

	if (n == 1 && m == 1) {cout << 0 << endl; return;}

	int ans = 0 ;

	ans = (n - 1) + (m - 1) + min(m ,  n);


	cout << ans << endl;



}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t; while (t--)
		solve();


	return 0;
}



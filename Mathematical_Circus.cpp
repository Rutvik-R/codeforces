// Rutvik Ranpariya

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
	int n, k;
	cin >> n >> k;


	if ( k % 4 == 0) {
		cout << "NO" << endl;
	}

	else if (k % 4 == 1) {
		cout << "YES" << endl;
		for (int i = 1; i <= n; i += 2)
		{
			cout << i << " " << i + 1 << endl;
		}
	}

	else if (k % 4 == 2) {
		cout << "YES" << endl;
		for (int i = 3; i < n + 1; i += 4)
		{
			cout << i << " " << i + 1 << endl;
		}
		for (int i = 1; i < n + 1; i += 4)
		{
			cout << i + 1 << " " << i << endl;
		}

	}

	else {
		cout << "YES" << endl;
		for (int i = 1; i <= n; i += 2)
		{
			cout << i << " " << i + 1 << endl;
		}
	}


}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
		solve();
}



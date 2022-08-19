#include <bits/stdc++.h>
using namespace std;



void solve() {
	int n, m , noOf1 = 0  ;
	cin >> n >> m;
	bool good = false ;

	vector<vector<char>> arr(n , vector<char> (m , '0'));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
			if (arr[i][j] == '1') noOf1++;
			else if (good == false) {

				if (i != 0 && arr[i - 1][j] == '0') good = true;
				else if (i != 0 && j != 0 && arr[i - 1][j - 1] == '0') good = true;
				else if (i != 0 && j != m - 1 && arr[i - 1][j + 1] == '0') good = true;
				else if (j != 0 && arr[i][j - 1] == '0') good = true ;
			}
		}
	}
	if (good == true) cout << noOf1 << endl;
	else if (noOf1 == n * m) cout << noOf1 - 2 << endl;
	else cout << noOf1 - 1 << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t; while (t--)	solve();
}



#include <bits/stdc++.h>
using namespace std;



void solve() {
	int n , dumi , max1 = 0 , max2 = 1 , min1 = 0 , min2 = 1;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[max1] <= arr[i]) {
			if (i > 0) max2 = max1 ;
			max1 = i;
		}
		else if (max2 >= 0 && arr[max2] <= arr[i]) {
			max2 = i;
		}

		if (arr[min1] >= arr[i]) {
			if (i > 0) min2 = min1 ;
			min1 = i;
		}

		else if (arr[min2] >= arr[i]) {
			min2 = i ;
		}
	}
	cout << arr[max1] + arr[max2] - arr[min1] - arr[min2] << endl;



}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t; while (t--)
		solve();
}



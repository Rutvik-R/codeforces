// Rutvik Ranpariya

#include <bits/stdc++.h>
using namespace std;

#define int                                 long long

void solve() {

    int n, k, b, s;

    cin >> n >> k >> b >> s;

    if (s > k * b + (k - 1)*n || s < k * b) cout << -1 << endl;

    else {

        n--;
        cout << min(b * k + k - 1 , s) << " ";
        s -= min(b * k + k - 1 , s);
        while (s) {
            cout << min(s , k - 1) << " ";
            s -= min(s , k - 1);
            n--;
        }
        while (n--) {
            cout << 0 << " ";
        }
        cout << endl;
    }




}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; while (t--)
        solve();
}



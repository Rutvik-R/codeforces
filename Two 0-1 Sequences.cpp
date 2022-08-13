// Rutvik Ranpariya

#include <bits/stdc++.h>
using namespace std;

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#define pi 									3.1415926535897
#define endl 								"\n"
#define ll 									long long
#define int 								long long
#define modulo 								(1000000000 + 7)
#define vi 									vector<int>
#define vvi 								vector<vector<int>>
#define rep(i , n) 							for (int i = 0; i < n; ++i)
#define testrep								ll t; cin>>t ; rep(i,t)
#define inf 								(ll)1e18
#define mii									map<int , int>
#define ff 									first
#define ss 									second
#define pb 									push_back
#define all(a)								a.begin(), a.end()
#define nl 									cout<<endl;

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int gcd_(int a , int b) {if (b == 0) return a ; return  gcd_(b , a % b) ;}
int pow_(int a , int b) {if (b == 0)return 1; int dumi = 1 ; while (b != 1) {if (b % 2 == 1) {dumi = (dumi * a) % modulo ; b--;} a = (a * a) % modulo ; b /= 2 ;} return (dumi * a) % modulo ;}
int NcR(int n , int r) {if (n < r) return -1 ; if (n - r < r) r = n - r ; int p = 1 , k = 1 , m ; while (r) {p *= n ; k *= r ; m = gcd_(p, k); p /= m ; k /= m ; n--; r--;} return p ;}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void print(vi a) { for (auto x : a) cout << x << " "; nl}
void print(set<int> a) {for (auto x : a) cout << x << " "; nl}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void solve() {
	int n , m ;

	cin >> n >> m;

	string s1 , s2 ;
	cin >> s1 >> s2 ;

	int ind1 = n - 1 , ind2 = m - 1 ;

	while (ind2 != 0) {
		if (s1[ind1] != s2[ind2]) break;
		ind1--;
		ind2--;
	}
	if (s1.find(s2[0]) > n - m) cout << "NO" << endl;

	else if (ind2 != 0) cout << "NO" << endl;

	else cout << "YES" << endl;


	// nl


}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t = 1;
	cin >> t ;
	while (t--) solve();

}



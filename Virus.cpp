
// Rutvik Ranpariya

#include <bits/stdc++.h>
using namespace std;

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#define pi 									3.1415926535897
#define endl 								"\n"
#define ll 									unsigned long long
#define int 								unsigned long long
#define modulo 								(1000000000 + 7)
#define vi 									vector<int>
#define vvi 								vector<vector<int>>
#define rep(i , n) 							for (int i = 0; i < n; ++i)
#define testrep								ll t; cin>>t ; rep(i,t)
// #define inf 								(ll)1e18
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

	int n, m , dumi , priv , start , move = 0 , negi = 0;
	cin >> n >> m;

	multiset<pair<int , pair<int , int>>> mp;


	vector<int> num(m , 0);

	rep(i , m)cin >> num[i];

	if (m == 1) {cout << 2 << endl; return;}

	sort(all(num));

	rep(i , m - 1) {
		priv = num[i];
		dumi = num[i + 1];

		mp.insert({dumi - priv - 1 , {priv , dumi}});

	}

	mp.insert({n - num[m - 1] + num[0] - 1 , {num[m - 1] , num[0]}});

	multiset<pair<int , pair<int , int>>>::iterator it , it1 ;

	// for (auto x : mp) cout << x.ff << " " << x.ss.ff << " " << x.ss.ss << endl;

	// nl

	for ( it = mp.end() ; it != mp.begin() ; it--)
	{
		it--;

		// cout << (*it).ff << " " << (*it).ss.ff << " " << (*it).ss.ss << endl;

		if (((*it).ff) <= 2 * move) break;

		if ((*it).ff - 2 * move == 1) {move++; negi++;}

		else { negi += ((*it).ff - 1) - 2 * move  ; move += 2;}

		// cout << move << " " << negi << endl << endl;

		it++;
	}

	cout << n - negi << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t = 1;

	cin >> t ;
	while (t--) solve();

}



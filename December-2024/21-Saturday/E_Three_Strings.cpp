#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define all(x) (x).begin(), (x).end()
#define f(i, x, n) for (ll i = x; i < n; i++)
#define rf(i, x, n) for (ll i = x; i >= n; i--)
 
const ll mod = 1e9+7;
const ll mod2 = 998244353;
const ll N = 1e6+5;
 
void init(){
    
}
 
ll rec(ll i, ll j, ll &n, ll &m, string &a, string &b, string &c, vector<vector<ll>> &dp){
    if(i == n && j == m) return 0ll;
 
    if(i == n){
        ll cnt = 0;
        f(k, j, m){
            if(c[i + k] != b[k]){
                ++cnt;
            }
        }
        return cnt;
    }
 
    if(j == m){
        ll cnt = 0;
        f(k, i, n){
            if(c[j + k] != a[k]){
                ++cnt;
            }
        }
        return cnt;
    }
 
    if(dp[i][j] != -1) return dp[i][j];
 
    ll ans = min(rec(i + 1, j, n, m, a, b, c, dp) + (c[i + j] != a[i]), rec(i, j + 1, n, m, a, b, c, dp) + (c[i + j] != b[j]));
 
    return dp[i][j] = ans;
}
 
void solve(){
    string a, b, c;
    cin >> a >> b >> c;
 
    ll n = c.length();
    ll sa = a.length(), sb = b.length();
 
    vector<vector<ll>> dp(sa, vector<ll> (sb, -1));
 
    ll ans = rec(0, 0, sa, sb, a, b, c, dp);
 
    cout << ans << "\n";
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
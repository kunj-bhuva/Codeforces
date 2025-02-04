#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(),t.end()
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define pb push_back
#define all(x) (x).begin(), (x).end()
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define f(i, x, n)       for (ll i = x; i < n; i++)
#define rf(i, x, n)      for (ll i = x; i >= n; i--)
 
const ll mod = 1e9+7;
const ll mod2 = 998244353;
const ll inf = 1e18;
const ll N = 1e5+5;
 
 
 
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) { return (a.second < b.second); }
ll power(ll n,ll a){ ll res=1; while(a){ if(a%2) res*=n,a--; else   n*=n,a/=2;} return res;}
ll modpower(ll n,ll a,ll p){ ll res=1; while(a){ if(a%2) res= ((res*n)%p) ,a--; else n=((n*n)%p),a/=2;} return res;}
ll fastprime(ll a){ if (a != 2 && a % 2 == 0 || a < 2) return 0;  for(ll i = 3; i * i <= a; i += 2) if(a % i == 0) return 0; return 1;}
ll mod_mul_inverse(ll a,ll b) {return modpower(a , b-2, b);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
 
void solve(){
  ll n, m;
  cin >> n >> m;
  vector<ll> v(n);
  vector<ll> last(m+n+1, -1), fr(m+n+1, 0);
  f(i, 0, n){
    cin >> v[i];
    last[v[i]] = 0;
  }
 
  f(i, 1, m+1){
    ll a, b;
    cin >> a >> b;
    fr[v[a-1]] += (i - last[v[a-1]]);
    last[v[a-1]] = -1;
    last[b] = i;
    v[a-1] = b;
  }
 
  f(i, 0, m+n+1){
    if(last[i] != -1){
      fr[i] += (m + 1 - last[i]);
    }
  }
  // debug(fr);
  ll tpairs = ((m + 1) * (m)) / 2;
  ll ans = 0;
  f(i, 1, m+n+1){
    if(fr[i] >= m){
      ans += tpairs;
    }else{
      ll notinarr = m+1 - fr[i];
      ll notinpair = (notinarr * (notinarr - 1)) / 2;
      ans += (tpairs - notinpair);
    }
  }
 
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
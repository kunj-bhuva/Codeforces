#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define pll pair<ll, ll>

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fi(l, r) for(ll i=l;i<r;i++)
#define fj(l, r) for(ll j=l;j<r;j++)
#define fir(r, l) for(ll i=r;i>=l;i--)
#define fjr(r, l) for(ll j=r;j>=l;j--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve(){
  ll n;
  cin >> n;
  vector<ll> v;
  set<ll> s;
  fi(0, n){
    ll a;
    cin >> a;
    s.insert(a);
  }

  for(auto i : s){
    v.pb(i);
  }

  ll ans = 0;
  ll m = v.size();
  fi(0, m-1){
    ans = max(ans, v[m-1] + v[i+1] - 2*v[i]);
  }

  fir(m-1, 1){
    ans = max(ans, 2*v[i] - v[i-1] - v[0]);
  }

  cout << ans << "\n";

}

int main() {
 
  
  
  ll t = 1;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
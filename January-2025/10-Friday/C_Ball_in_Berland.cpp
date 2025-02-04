#include <bits/stdc++.h>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fi(l, r) for(ll i=l;i<r;i++)
#define fj(l, r) for(ll j=l;j<r;j++)
#define fir(r, l) for(ll i=r;i>=l;i--)
#define fjr(r, l) for(ll j=r;j>=l;j--)
using namespace std;
using ll = long long;
using ld = long double;

  void solve(){
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> a(k), b(k);
  fi(0, k) cin >> a[i];
  fi(0, k) cin >> b[i];
 
  vector<ll> bo(n+1), gi(m+1);
 
  fi(0, k){
    bo[a[i]]++;
    gi[b[i]]++;
  }
 
  ll ans = 0;
  fi(0, k){
    ans += (k - bo[a[i]] - gi[b[i]] + 1);
  }
 
  cout << ans/2 << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
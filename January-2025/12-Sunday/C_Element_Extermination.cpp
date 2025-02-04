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
  vector<ll> v(n);
  fi(0, n) cin >> v[i];
 
  if(v[0] < v[n-1]){
    yes;
  }else{
    no;
  }
}
 
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(),t.end()
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
 
// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }

    void solve(){
  ll n, m;
  cin >> n >> m;
 
  vector<vector<int>> v(n, vector<int> (m, 0));
  vector<ll> sum(n, 0);
  ll total = 0;
  f(i, 0, n){
    f(j, 0, m){
      cin >> v[i][j];
      sum[i] += v[i][j];
    }
    total += sum[i];
  }
 
  if(total % n != 0){
    cout << "-1\n";
    return;
  }
 
  total /= n;
  vector<pair<ll, pair<ll, ll>>> ans;
 
  f(j, 0, m){
    vector<ll> to1s, to0s;
    f(i, 0, n){
      if(sum[i] > total && v[i][j] == 1) to0s.pb(i);
      if(sum[i] < total && v[i][j] == 0) to1s.pb(i);
    }
 
    ll size = min(to1s.size(), to0s.size());
 
    f(i, 0, size){
      sum[to0s[i]]--;
      sum[to1s[i]]++;
      ans.pb({to0s[i]+1, {to1s[i]+1, j+1}});
    }
  }
 
  ll sz = ans.size();
  cout << sz << "\n";
  f(i, 0, sz){
    cout << ans[i].first << " " << ans[i].second.first << " " << ans[i].second.second << "\n";
  }
    return;
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
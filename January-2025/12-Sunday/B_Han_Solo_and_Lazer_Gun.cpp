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
typedef long double lld;

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    ll n, x0, y0;
  cin >> n >> x0 >> y0;
  set<lld> s;
  ll cnt = 0;
  int i=0;
  fi(i,0, n){
    lld x, y;
    cin >> x >> y;
    if(x == x0){ cnt = 1; continue;}
    lld slope = (y - y0) / (x - x0);
    s.insert(slope);
  }
  cout << s.size() + cnt << "\n";

    return;
}
// Main function and template
int main() {
    int t=1;
    while(t--) {
        solve();
    }
    return 0;
}
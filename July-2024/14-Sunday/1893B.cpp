#include <bits/stdc++.h>
 
#define pb push_back
#define all(x) x.begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()
using namespace std;
 
void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m), c(n + m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(rall(b));
  merge(all(a), all(b), c.begin(), greater<int>());
  for (int i = 0; i < n + m; i++) {
    cout << c[i] << ' ';
  }
  cout << '\n';
}
 
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
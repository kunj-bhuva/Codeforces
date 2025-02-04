#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

// Macros for easy use
#define ip(a, n) for (int i = 0; i < n; i++) { int x; cin >> x; a.push_back(x); }

void solve() {
    int n;
    cin >> n;
    vi a;
    ip(a, n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[a[i]] = i + 1;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (auto it : a) {
        if (mp.find(it) != mp.end()) {
            ans += mp[it];
            mp.erase(it);  
        }
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

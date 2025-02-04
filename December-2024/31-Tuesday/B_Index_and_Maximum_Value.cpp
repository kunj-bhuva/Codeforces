#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sortv(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb() pop_back()
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

#define printv(v) for (auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n, maxi)                 \
    for (int i = 0; i < n; i++) {      \
        int xvyz; cin >> xvyz;         \
        maxi = max(maxi, (ll)xvyz);    \
        a.push_back(xvyz);             \
    }

void solve() {
    int n, m;
    cin >> n >> m;
    vii a;
    ll maxi = 0;
    ip(a, n, maxi);

    if (maxi > 1e6) { // Arbitrary upper limit for safety
        Na;
        return;
    }

    vector<ll> ans(maxi + 2, 0);

    for (int i = 0; i < m; i++) {
        char c;
        ll l, r;
        cin >> c >> l >> r;
        if (l >= 1 && l <= maxi && r >= 1 && r <= maxi) {
            if (c == '+') {
                ans[l]++;
                if (r + 1 <= maxi) ans[r + 1]--;
            } else {
                ans[l]--;
                if (r + 1 <= maxi) ans[r + 1]++;
            }
        }
    }

    for (int i = 1; i <= maxi; i++) {
        ans[i] += ans[i - 1];
    }

    printv(ans);
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

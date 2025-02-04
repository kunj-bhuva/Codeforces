#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;

// Macro definitions
#define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

#define printv(v) for (auto i : v) cout << i << ' '; cout << endl;

void func(ll i, ll l, ll r, ll k, vector<ll> &ans) {
    if (l == r) {
        ans[l] = i;
        return;
    }
    // 
    ll sz = r - l - 1;
    if (sz < 60 && (1LL << sz) < k) {
        ans[r] = i;
        func(i + 1, l, r - 1, k - `, ans);
    } else {
        ans[l] = i;
        func(i + 1, l + 1, r, k, ans);
    }
}

void solve() {
    
    ll n, k;
    cin >> n >> k;
    if (n - 1 < 62 && (1LL << (n - 1)) < k) {
        cout << "-1\n";
        return;
    }
    vector<ll> ans(n);
    func(1, 0, n - 1, k, ans); // n
 
    for (auto i : ans)
        cout << i << ' '; // n
    cout << '\n';
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

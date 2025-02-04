#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define printv(v) for (auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for (int i = 0; i < n; i++) { int x; cin >> x; a.push_back(x); }

void solve() {
    int n, k;
    cin >> n >> k;
    vii a;
    ip(a, n);

    set<ll> st(a.begin(), a.end());
    unordered_map<ll, ll> mp;
    for (auto it : a) {
        mp[it]++;
    }

    vii unique, unique_value;
    for (auto it : st) {
        unique.pb(it);
        unique_value.pb(mp[it]);
    }

    int m = unique.size();
    ll ans = 0; // To store the maximum sum
    ll current_sum = 0; // To track the sum of the current window
    int start = 0; // Sliding window start index

    for (int end = 0; end < m; end++) {
        current_sum += unique_value[end]; 

        while (end > start && (unique[end] - unique[end - 1] != 1 || (end - start + 1) > k)) {
            current_sum -= unique_value[start];
            start++;
        }

        ans = max(ans, current_sum);
    }

    cout << ans << endl; // Output the result
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

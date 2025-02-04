#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vii;
typedef vector<int> vi;

// Macro definitions
#define pb(x) push_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)

void solve() {
    int n;
    cin >> n;
    vii a(n);
    map<ll, ll> mp; 
    mp[0] = -1;

    ll prefix_sum = 0, cnt = 0, last_reset = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefix_sum += a[i];

        if (mp.find(prefix_sum) != mp.end() && mp[prefix_sum] >= last_reset) {
              cnt++;
            last_reset = i; 
        }

        mp[prefix_sum] = i;
    }

    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

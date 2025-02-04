#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;
const int MOD = 1e9 + 7;

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

void solve()
{
    string S;
    cin >> S;

    int n = S.size();
    S = " " + S;

    vector<int> P(n + 1, 0);

    for (int i = 1; i <= n; i++){
        P[i] = (S[i] == '1' ? 1 : -1) + P[i - 1];
    }

    map<int, ll> cnt;
    ll ans = 0;

    for (int i = 0; i <= n; i++){
        ans = (ans + (n - i + 1) * cnt[P[i]]) % MOD;
        cnt[P[i]] = (cnt[P[i]] + (i + 1)) % MOD;
    }
    cout << ans << "\n";
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
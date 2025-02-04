#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl
int dp[(int)3e5 + 5];
const int MOD = 1e9 + 7;
// Additional macros for printing and input
#define printv(v)         \
    for (auto i : v)      \
        cout << i << ' '; \
    cout << endl;
#define ip(a, n)                \
    for (int i = 0; i < n; i++) \
    {                           \
        int xvyz;               \
        cin >> xvyz;            \
        a.push_back(xvyz);      \
    }

void solve()
{
    int n, k;
    cin >> n >> k;
    int used = 0;
    for (int i = 0; i < k; i++)
    {
        int r, c;
        cin >> r >> c;
        used += 2 - (r == c);
    }
    int m = n - used;
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= m; i++)
        dp[i] = (dp[i - 1] + 2ll * (i - 1) * dp[i - 2] % MOD) % MOD;
    cout << dp[m] << "\n";
    return;
}
// Main function and template
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
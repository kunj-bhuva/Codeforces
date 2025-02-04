#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;
const int mod = 1e9+7;
const int inf = 1e17;
const int mod2 = 1e9+9;
// Macro definitions
// #define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

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
    int n;
    cin >> n;
    int a[n + 1];

    a[n] = inf;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = inf;
    for (int i = 0; i < n - 2; i++)
    {

        int index = lower_bound(a + i, a + n, (a[i] + a[i + 1])) - a;

        ans = min(ans, i + n - index);
    }

    if (ans == inf)
        ans = 0;
    cout << ans << "\n";
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
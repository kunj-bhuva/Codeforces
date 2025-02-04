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
    vii a;
    ip(a, n);
    ll ans = 0;
    if (n == 1)
    {
        if (a[0] <= 0)
            cout << 0 << "\n";
        else
            cout << a[0] << "\n";

        return;
    }

    // ll int ans = 0;

    if (a[0] >= 0 || a[1] <= 0)
    {
        for (int i = 0; i < n; i++)
            ans += max(0ll, a[i]);

        cout << ans << "\n";

        return;
    }

    for (int i = 2; i < n; i++)
        ans += max(0ll, a[i]);

    ans += max(0ll, a[0] + a[1]);

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
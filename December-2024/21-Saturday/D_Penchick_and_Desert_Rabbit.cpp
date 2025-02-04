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
    vector<int> ar(n), pref(n), suff(n), ans(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    pref[0] = ar[0];
    for (int i = 1; i < n; i++)
        pref[i] = max(pref[i - 1], ar[i]);

    suff[n - 1] = ar[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suff[i] = min(suff[i + 1], ar[i]);
        
    ans[n - 1] = pref[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (pref[i] > suff[i + 1])
            ans[i] = ans[i + 1];
        else
            ans[i] = pref[i];
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
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
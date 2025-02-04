#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(), t.end()
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
        ll xvyz;                \
        cin >> xvyz;            \
        a.push_back(xvyz);      \
    }

void solve()
{
    int n, k;
    cin >> n >> k;
    vii a;
    ip(a, n);
    if (n == k)
    {
        int cnt = 1;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] != cnt)
            {
                cout << cnt << endl;
                return;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    else
    {
        int left = n - k + 1;
        for (int i = 1; i <= left; i++)
        {
            if (a[i] != 1)
            {
                cout << "1" << endl;
                return;
            }
        }
        cout << "2" << endl;
    }

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
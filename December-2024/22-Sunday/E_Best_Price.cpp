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
// bool check(ll price,vii& a,vii& b, ll k)
// {
//     ll n=a.size();
//     ll neg=0;
//     ll customers=0;
//     for(ll i=0;i<n;i++)
//     {
//         if(neg>k)return false;
//         if(price<=b[i]&&price>a[i])
//         {
//             neg++;

//         }

//         if(price<=b[i])
//         customers++;cpp

//     }
// }
void solve()
{
    ll n, k;
    cin >> n >> k;
    vii a, b;
    ip(a, n);
    ip(b, n);
    sort(a);
    sort(b);

    set<ll> s(a.begin(), a.end());
    s.insert(b.begin(), b.end());
    ll ans = 0;
    for (auto it : s)
    {
        ll i1 = lower_bound(a.begin(), a.end(), it) - a.begin();
        ll i2 = lower_bound(b.begin(), b.end(), it) - b.begin();
        if (i1 - i2 <= k)
        {
            ans = max(ans, (n - i2) * it);
        }
    }
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
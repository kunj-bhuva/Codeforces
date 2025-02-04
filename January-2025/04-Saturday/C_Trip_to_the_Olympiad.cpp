#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <bitset>

// Macros for convenience
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll a, b, c;
    for (int i = 30; i >= 0; i--)
    {
        ll b1 = 0;
        ll b2 = 0;
        if (l & (1ll << i))
        {
            b1 = 1;
        }
        if (r & (1ll << i))
        {
            b2 = 1;
        }
        if (b1 == b2)
        {
            ans += b1 * (1ll << i);
        }
        else
        {
            a = ans + (1ll << i);
            b = a - 1;
            break;
        }
    }
    for (ll i = l; i <= r; i++)
    {
        if (i != a && i != b)
        {
            c = i;
            break;
        }
    }
    cout << a << " " << b << " " << c << endl;
    // cout << (a ^ b + b ^ c + c ^ a) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

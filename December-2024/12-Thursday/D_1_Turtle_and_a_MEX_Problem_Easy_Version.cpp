#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()


// #define mod (ll)(1e9+7)

void solve()
{
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    ll var = 0;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        ll len;
        cin >> len;
        while (len--)
        {
            ll num;
            cin >> num;
            st.insert(num);
        }
        int y = 0;
        ll j = 0;
        while (true)
        {
            if (st.find(j) == st.end())
            {
                if (y == 0)
                    y = 1;
                else
                {
                    var = max(var, j);
                    break;
                }
            }
            // debug(j)
                j++;
        }
        st.clear();
    }
    // cout<<var<<endl;
    if (var >= m)
    {
        cout << (m + 1) * var << endl;
    }
    else
    {
        cout << var * (var + 1) + (m * (m + 1)) / 2 - (var * (var + 1)) / 2 << endl;
    }
}

int main()
{


    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

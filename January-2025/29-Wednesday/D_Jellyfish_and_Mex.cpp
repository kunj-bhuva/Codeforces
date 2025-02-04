#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(),t.end()
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl
#define f(i, l, r) for(ll i=l; i<r; i++)

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }
ll fn(vector<vector<ll>> &dp,ll ind,ll mx,vector<ll> &v)
{
    if(mx==0 || ind==0)
    {
        return (v[ind] - 1) * mx;
    }
    if(dp[ind][mx]!=-1)
    {
        return dp[ind][mx];
    }
    ll a = fn(dp, ind - 1, mx, v);
    ll b = (v[ind] - 1) * mx + ind + fn(dp, ind - 1, ind, v);
    return dp[ind][mx] = min(a, b);
}
void solve()
{
    int n;
    cin>>n;
    vi a;
    for(int i=0;i<n;i++)
    {
        int cl;
        cin>>cl;
        a.push_back(cl);
    }

    vector<ll> v(n + 1, 0);

    f(i,0,n)
    {
        if(a[i]<=n)
        {
            v[a[i]]++;
        }
    }
    ll mx = 0;


    f(i,0,n)
    {
        if(v[i]==0)
        {
            mx = i;
            break;
        }
    }

    // printv(v);

    // cout<<mx<<"mhg"<<endl;
    if(mx==0)
    {
        cout << 0 << endl;
        return;
    }


    vector<vector<ll>> dp(mx+1, vector<ll>(mx+1, -1));
    cout << fn(dp, mx-1, mx, v) << endl;
    
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
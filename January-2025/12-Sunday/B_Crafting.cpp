#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

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
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    ll n;
    cin>>n;
    vii a,b;
    ip(a,n);
    ip(b,n);
    ll cnt=0;
    ll mini=INT_MAX;
    ll req=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(b[i]>a[i])
        {
            cnt++;
            req=max(req,b[i]-a[i]);
        }
        else
        {
            mini=min(mini,a[i]-b[i]);
        }
    }
    if(cnt>1)
    {
        Na;
        return;
    }
    
    if(mini>=req)
    {
        Ha;
        return;
    }

    
    Na;

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
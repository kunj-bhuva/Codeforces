#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;
// Macro definitions
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
#define ff     first
#define ss     second
// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    ll int n;
        cin>>n;
 
        vector<ll int> x(n);
        for(auto &e: x)
            cin>>e;
 
        vector<pair<ll int, int>> vp;
 
        for(int i=0; i<n; i++)
            vp.pb({x[i], i});
 
        sort(vp.begin(), vp.end());
 
        ll int val = 0;
 
        for(int i=0; i<n; i++)
            val += (vp[i].ff - vp[0].ff + 1);
 
        vector<ll int> ans(n);
        ans[vp[0].ss] = val;
 
        for(ll int i=1; i<n; i++)
        {
            val -= (n-i)*(vp[i].ff-vp[i-1].ff);
            val += i*(vp[i].ff-vp[i-1].ff);
 
            ans[vp[i].ss] = val;
        }
 
        for(auto e: ans)
            cout<<e<<" ";
        cout<<"\n";
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
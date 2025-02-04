#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long ll> vii;
typedef vector<ll> vi;

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
#define ip(a, n) for(ll i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
   ll n;
   cin>>n;
   vii a;
   ip(a,n);
   vii ans(n,0);

    ll other=1;
    unordered_map<ll,ll>done;
    
    // unordered_map<int,int>used;

    for(ll i=0;i<n;i++)
    {    
        if(done.find(a[i])==done.end())
        {
            ans[i]=a[i];
            done[a[i]]++;
            // used[a[i]]++;
        }
        else
        {
            while(done.find(other)!=done.end())
            {
                other++;
            }
            done[other]++;
            ans[i]=other;

        }
        
   }
   printv(ans);
   return;
}
// Main function and template
int main() {
    ll t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
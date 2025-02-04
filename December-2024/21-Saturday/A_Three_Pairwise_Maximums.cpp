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
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
   ll x,y,z;
   cin>>x>>y>>z;
   unordered_map<ll,ll>mp;
   mp[x]++;
   mp[y]++;
   mp[z]++;
   if(mp.size()==3)
   {
        Na;
        return;
   }
   else if(mp.size()==2)
   {
        ll big=0,small=INT_MAX;
        for(auto it:mp)
        {
            big=max(big,it.first);
            small=min(small,it.first);
        }
        if(mp[big]==1)
        {
            Na;
            return;
        }
        else
        {
            Ha;
            cout<<big<<" "<<small<<" "<<small<<endl;
        }
   }
   else
   {
        Ha;
        cout<<x<<" "<<x<<" "<<x<<endl;
        return;
   }
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
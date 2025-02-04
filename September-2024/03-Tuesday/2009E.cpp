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
   unordered_map<int,int>low;
   unordered_map<int,int>high;
   int n;
   cin>>n;
   while(n--)
   {
        int x,y;
        cin>>x>>y;
        if(y==0)low[x]++;
        if(y==1)high[x]++;
   }
   ll ans=0;
   for(auto it:low)
   {
        
        if(high.find(it.first)!=high.end())
        {
            ans+=low.size()-1;
        }
        if(high.find(it.first-1)!=high.end()&&high.find(it.first+1)!=high.end())
        ans++;
   }
   for(auto it:high)
   {
        if(low.find(it.first)!=low.end())
        {
            ans+=high.size()-1;
        }
        if(low.find(it.first+1)!=low.end()&&low.find(it.first-1)!=low.end())ans++;
   }
   cout<<ans<<endl;
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
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
   int n;
    cin>>n;
    vi up,down;
    ip(up,n);
    ip(down,n);
    int maxtrans=INT_MIN,ind=-1;
    // for(int i=0;i<n;i++)
    // {
    //     if(up[i]+down[i]>maxtrans)
    //     {
    //         maxtrans=up[i]+down[i];
    //         ind=i;
    //     }
    // }
    int ans=0;
    for(int i=0;i<n;i++)
    {
       
            ans+=max(up[i],down[i]);
        
    }
    int mini=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int temp=min(up[i],down[i]);
        mini=max(mini,temp);
    }
    ans+=mini;
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
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
    int n;
    cin>>n;
    vi a;
    int x=1;
    ll sum=0;
    for(int i = 0; i < n; i++) 
    { 
        ll xvyz; cin >>    xvyz; 
        a.push_back(xvyz); 
        // sum+=xvyz;
    }
    vi ans(n,0);
    ll newans=0;
    for(int i=0;i<n;i++)
    {
        ll y=__gcd(x,a[i]);
        y=a[i]/y;
        x=x*y;
    }
    cout<<x<<endl;
    // for()
    for(int i=0;i<n;i++)
    {
        sum+=x/a[i];
        ans[i]=(x/a[i]);
    }
    if(sum>=x)
    {
        cout<<"-1"<<endl;
        return;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
    }

    // for(int i=0;i<n;i++)
    // {
    //     if(newans>=(ans[i]*a[i]))
    //     {
    //         cout<<"-1"<<endl;
    //         return;
    //     }
    // }
    
    cout<<endl;


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
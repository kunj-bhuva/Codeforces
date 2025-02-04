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
#define ip(a, n,summm) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); summm+=xvyz; }

void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    vii a;
    ll sum=0;
    ip(a,n,sum);
    sort(a);
    vector<ll>pref(n,0);
    pref[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pref[i]=pref[i-1]+a[i];
    }
    ll ans=0;
    // cout<<sum<<endl;
    for(ll i=0;i<n;i++)
    {
        
        ll l=upper_bound(a.begin(),a.end(),sum-a[i]-x)-a.begin();
        if(l==n)l--;
        if(a[l]>sum-a[i]-x&&i>0)l--;
        // l=min(l,i-1);
        
        ll r=lower_bound(a.begin(),a.end(),sum-a[i]-y)-a.begin();
        if(a[r]<sum-a[i]-y && i<n)r++;

        if(sum-a[i]-y<=0)
            r=0;
        if(l>=i&&r<=i)
            {
                ans+=l-r;
                continue;
            }
        if(l<r)continue;
        // r=min(r,i-1);
        // cout<<l<<" "<<r<<endl;
        ans+=l-r+1;
    }
    cout<<ans/2<<endl;

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
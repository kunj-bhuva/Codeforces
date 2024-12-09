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
long long sum(vi &a)
{
    long long sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
    }
    return sum;
}
void solve()
{
    int n;
    cin>>n;
    vi a;
    ip(a,n+1);
    int maxi=a[n];
    sort(a);
    while(true)
    {
        int aa= upper_bound(a.begin(),a.end(),2*maxi)-a.begin()-1;  
        // if(aa==n+1)break;
        // if(aa==0)aa++;
        // cout<<a[aa]<<" "<<aa<<endl;
        if(a[aa]<=2*maxi && a[aa]>maxi)
        {
            maxi=a[aa];

        }
        else
        {
            break;
        }
        
    }
    // cout<<maxi<<endl;
    long long ans= sum(a);
    cout<<ans-maxi<<endl;
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
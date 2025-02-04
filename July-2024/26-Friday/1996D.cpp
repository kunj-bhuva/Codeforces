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
    int n,x;
    cin>>n>>x;
    long long ans=0;
    for(long long a=1;a<=min(n,x-2);a++)
    {
        for(long long b=min(n/a,x-a-1);b>0;b--)
        {
            long long c=min(((n-a*b)/(a+b)),x-a-b);
            if(c>=1)
            {
                ans+=c;
            }
        }

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
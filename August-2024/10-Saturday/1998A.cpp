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
    long long x,y,k;
    cin>>x>>y>>k;
    vector<long long >ans;
    if(k%2==0)
    {
        long long l=y-1;
        long long r=y+1;
        for(int i=0;i<k/2;i++)
        {
            ans.pb(l);
            l--;
            ans.pb(r);
            r++;
        }

    }
    else{
        ans.pb(y);
        long long l=y-1;
        long long r=y+1;
        for(int i=0;i<k/2;i++)
        {
            ans.pb(l);
            l--;
            ans.pb(r);
            r++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<x<<" "<<ans[i]<<endl;
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
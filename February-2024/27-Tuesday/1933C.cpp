#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;
#include <cmath>
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

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) 
    {
        ll a,b,l;
        cin>>a>>b>>l;
        
        ll p=1;
        map<ll,ll>mp;
        for(ll i=0;i<50;i++)
        {
            ll s=1;
            for(int j=0;j<=50;j++)
            {
                ll xx=s*p;
                if(l%xx==0)
                {
                    ll o=l/xx;
                    mp[o]++;
                }
                s*=b;
                if(s>l)break;
            }
            p*=a;
            if(p>l)break;

        }
        cout<<mp.size()<<endl;

        
        // cout<<p.size()<<endl;

    }
    return 0;
}
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
   ll n,m,k;
   cin>>n>>m>>k;
   vii a,b;
    ip(a,m);
    ip(b,k);

    // if(n>m)
    // {
    //     string s(m,'0');
    //     cout<<s<<endl;
    //     return;
    // }

    
        
        vector<int>vec(n+1,1);
        vec[0]=0;
        for(int i=0;i<k;i++)
        {
            vec[b[i]]=0;
        }
        // printv(vec);?

        unordered_map<int,int>ans;
        ll cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(vec[i]==1)
            {
                cnt++;
            }
        }


        for(int i=0;i<m;i++)
        {
            int notcome=a[i];

            if((vec[notcome]==1 && cnt<=1)||cnt==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
    

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
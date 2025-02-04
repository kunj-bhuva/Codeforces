#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(),t.end()
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
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>f;
    vector<vector<int>>a(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        int mini=2001;
        for(int j=0;j<m;j++)
        {
            
            cin>>a[i][j];
            mini=min(a[i][j],mini);
            
        }
       f.push_back({mini,i});
    }

    for(int i=0;i<n;i++)
    {
        ll small=f[i].first;
        for(int j=0;j<m;j++)
        {
            if((a[i][j]-small)%n!=0)
            {
                cout<<"-1"<<endl;
                return;
            }

        }
    }
    sort(start(f));
    for(int i=0;i<n;i++)
    {
        cout<<f[i].second +1<<" "; 
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
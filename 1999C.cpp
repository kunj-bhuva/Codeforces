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
    int n,s,m;
    cin>>n>>s>>m;
    int f=0;
    int prev=0;
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l;
        cin>>r;
        p.push_back({l,r});

    }
    for(int i=0;i<n;i++)
    {
        int l=p[i].first;
        int r=p[i].second;
        // cout<<l<<" "<<prev<<endl;
        if((l-prev)>=s)
        {
            f=1;
            break;
        }
        else
        {
            prev=r;
        }

    }
    if((m-prev)>=s)f=1;
    if(f==1)Ha;
    else Na;
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
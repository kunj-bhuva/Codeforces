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
    ll n,m,k;
    cin>>n>>m>>k;
    vii a;
    ip(a,n);
    vector<pair<pair<int,int>,int>>p;
    for(int i=0;i<m;i++)
    {
        ll oo,pp,ii;
        cin>>oo>>pp>>ii;
        p.push_back({{oo,pp},ii});
    }
    vector<pair<ll,ll>>op;
    vector<ll>work(m+2,0);
    for(int i=0;i<k;i++)
    {
        ll aa,bb;
        cin>>aa>>bb;

        work[aa]++;
        work[bb+1]--;

        // op.push_back({aa,bb});
    }
    
    for(int i=1;i<=m;i++)
    {
        work[i]+=work[i-1];
    }
    // printv(work);

    vector<ll>ans(n+2,0);
    for(int j=1;j<=m;j++)
    {
        int l=p[j-1].first.first;
        int r=p[j-1].first.second;
        int d=p[j-1].second;

        ans[l]+=d*work[j];
        ans[r+1]-=d*work[j];
    }
    // printv(ans);
    for(int i=1;i<=n+1;i++)
    {
        ans[i]+=ans[i-1];
    }
    // printv(ans);
    vector<ll>aa;
    for(int i=0;i<n;i++)
    {
        aa.push_back(ans[i+1]+a[i]);
        
    }

    printv(aa);

    
    return;
}
// Main function and template
int main() {
    int t=1; 
    while(t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
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
    vi a;
    int n=16;
    ip(a,n);
    vector<int>ans={0,1,1,2,2,2,2,3,3,3,3,3,3,3,3,4};
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        p.push_back({a[i],i});
    }
    sort(p.begin(),p.end());
    vector<int>re(16,0);
    for(int i=0;i<n;i++)
    {
        int ind=p[i].second;
        re[ind]=ans[i];
    }
    printv(re);
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
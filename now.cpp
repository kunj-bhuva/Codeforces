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
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    int mini=min(a,min(b,c));

    int mid=0;
    if((a>=b&&b>=c)||(c>=b&&b>=a))
        mid=b;
    else if((b>=c&&c>=a)||(a>=c&&c>=b))
        mid=c;
    else mid=a;
    int maxi=max(a,max(b,c));
    if(maxi-mid<=m)Ha;
    else if(mid-mini<=m)Ha;
    else Na;
    // cout<<mid<<endl;
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
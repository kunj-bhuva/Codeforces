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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    
    for(int i=1;i<n-1;i++)
    {
        if(a[i]=='.'&&b[i-1]=='x'&&b[i+1]=='x'&&b[i]=='.'&&a[i-1]=='.'&&a[i+1]=='.')ans++;
        if(b[i]=='.'&&a[i-1]=='x'&&a[i+1]=='x'&&a[i]=='.'&&b[i+1]=='.'&&b[i-1]=='.')ans++;
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
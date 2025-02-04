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
    int n;
    cin>>n;
    vii a,b;
    ip(a,n);
    ip(b,n);
    unordered_map<int,int>aa,bb;
    for(int i = 0; i < n; i++) { aa[a[i]]++; bb[b[i]]++;}
    int x=aa.size();
    int y=bb.size();
    if(x*y<=2)Na;
    else Ha;
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
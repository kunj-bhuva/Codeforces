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
    ll n;
    cin>>n;
    vii a,b;
    ip(a,n);
    ip(b,n);
    if(n==1){
        cout<<max(a[0],b[0]);
        return;
    }
    ll up=a[0];
    ll down=b[0];
    for(int i=1;i<n;i++)
    {
        ll newup=max(up,down+a[i]);
        ll newd=max(down,up+b[i]);
        up=newup;
        down=newd;
    }
    cout<<max(up,down);
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
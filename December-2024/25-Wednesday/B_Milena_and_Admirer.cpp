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
#define rf(j, l, r) for (ll j = l; j >= r; j--)
#define ld long double


// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    int n;
    cin>>n;
    vi a;
    ip(a,n);
    ll ans=0;
    rf(i, n - 2, 0)
    {
        if(a[i]<=a[i+1])
        {
            continue;
        }
        ll x = ceil((ld)a[i] / a[i + 1]);
        ans += x - 1;
        a[i] /= x;
    }
    cout << ans << endl;
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
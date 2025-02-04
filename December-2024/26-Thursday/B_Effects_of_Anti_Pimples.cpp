#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;
#define int int64_t

// Macro definitions
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl
#define dsortvect(v) sort(v.begin(), v.end(), greater<>());

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }
ll mod=998244353;
int xpoweryMOD(int x, int y, int mod)
{
    int res = 1;
    if (x == 0)
        return 0;
    while (y)
    {
        if (y & 1)
            (res *= x) %= mod;
        y >>= 1;
        (x *= x) %= mod;
    }
    return res;
}
int func(int val, int x)
{
    int pw = xpoweryMOD(2, x, mod);
    int ans = (val * pw) % mod;
    return ans;
}
 
void solve()
{
    int n;
    cin>>n;
    vi a;
    ip(a,n);
    vi maxi(n,0);
    
    for(int i=0;i<n;i++)
    {
        for(int k=i;k<n;k+=i+1)
        {
            maxi[i]=max(maxi[i],a[k]);
        }
    }

    int sum = 0;
        dsortvect(maxi);
        for (int i = 0; i < n; i++)
        {
            sum = (sum + func(maxi[i], n - 1 - i)) % mod;
        }
        cout << sum << endl;
    return;
}
// Main function and template
signed main() {
    
        solve();
    
    return 0;
}
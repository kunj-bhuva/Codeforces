#include <bits/stdc++.h>
#include<math.h>
#include<cmath>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    ll n,k;
    cin>>n>>k;
    if(k==1)
    {
        cout<<n<<endl;
        return;
    }

    long long y=0;
    int cnt=0;
    while (n >=k) {
        long long x = 1, k_pow = k;
        while (k_pow * k <= n && k_pow * k > 0) {
            k_pow *= k;
        }
        
        n -= k_pow;
        cnt++;
    }
    if(n<k)
    {
        cnt+=n;
        
    }
    cout<<cnt<<endl;

}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
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
    long long n,x;
    cin>>n>>x;
    vi a;
    ip(a,n);
    sort(a);
    long long sur=0;
    long long cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>=x)
        {
            cnt++;
            sur+=(a[i]-x);
        }
        else if((x-a[i])<=sur)
        {
            sur-=(x-a[i]);
            cnt++;
        }
        else break;
    }
    cout<<cnt<<endl;
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
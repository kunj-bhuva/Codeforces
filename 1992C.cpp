#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n,0);
    for(int i=0;i<(n-m);i++)
    {
        a[i]=i+m+1;

    }
    int cnt=1;
    for(int i=(n-m);i<n;i++)
    {
        a[i]=cnt;
        cnt++;
    }
    for(int i=0;i<(n);i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
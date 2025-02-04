#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
// #define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;


void solve()
{
    int n;
    cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<a[n-1]<<" ";
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    
    // printv(ans);
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
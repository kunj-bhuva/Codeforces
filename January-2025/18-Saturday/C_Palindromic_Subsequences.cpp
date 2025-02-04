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
    vii a(n,0);
    int x=1;
    if(n==6)
    {
        cout<<"1 1 2 3 1 2"<<endl;
        return;
    }

    for(int i=0;i<2;i++)
    {
        a[i]=x;
        x++;
    }
    a[n-1]=2;
    a[n-2]=1;
    x=3;
    for(int i=2;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=x;
            x++;
        }
        else
        {
            break;
        }
    }
    printv(a);
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
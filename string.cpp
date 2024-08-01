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


// Main function and template
int main() {
    int n=10,m=-1;
    for(int i=0;i<=63;i++)
    {
        long long kk=1<<i;
        if((n&kk)!=0)
        {
            Ha;
            cout<<i<<endl;
        }
    }
    // int d=1<<4;
    // cout<<d<<endl;
    
        
    return 0;
}
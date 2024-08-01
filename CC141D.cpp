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
    long long n,h,k;
    cin>>n>>k>>h;
    long long c=0;
     int curr=n;
    if(n>=h)
    {
            c+=(n-h+1)*n ; 
           
            curr=h-1;
    }
    
    while(curr)
    {
        long long po=0;
        if(curr*k-h>=0)
            po=(curr*k-h)/(k-1);
        else {break;}
        c+=po;
        curr--;
    }
    
    cout<<c<<endl;
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
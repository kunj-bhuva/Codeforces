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
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vi a;
        ip(a,n);
        long long int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                c+=-a[i];
            }
            else{
                c+=a[i];
            }
        }
        cout<<c<<endl;
        // Your code logic goes here
    }
    return 0;
}
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
    if(n%2==1&& n<26)cout<<"-1"<<endl;
    else if(n%2==1 && n>=26)
    {
        cout<<"1 3 3 4 4 5 5 6 6 1 2 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 2 ";
        int temp=14;
        for(int i=0;i<n-27;i+=2)
        {
            cout<<temp<<" "<<temp<<" ";
            temp++;
        }
    }
    else{
        int temp=1;
        for(int i=0;i<n;i+=2)
        {
            cout<<temp<<" "<<temp<<" ";
            temp++;
        }
        cout<<endl;

    }
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
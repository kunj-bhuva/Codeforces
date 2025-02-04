#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(),t.end()
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    int n;
    cin>>n;
    if(n==2)
    {
        cout<<"1 1"<<endl;
        cout<<"1 2"<<endl;
        cout<<endl;
        return;

    }
    if(n==3)
    {
        cout<<"2 1"<<endl;
        cout<<"2 3"<<endl;
        cout<<"3 1"<<endl;
        cout<<endl;
        return;
    }
    vector<pair<int,int>>p;
    p.push_back({1,1});
    p.push_back({2,1});
    p.push_back({n,n});

    int pp=3;
    for(int i=3;i<n;i++)
    {
        p.push_back({1,pp++});
    }
    for(auto it:p)
    {
        cout<<it.first<<" "<<it.second<<endl;
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
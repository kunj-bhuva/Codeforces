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
    vii a;
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    if(n==2)
    {
        cout<<"1 2"<<endl;
        return;
    }
    if(n==3)
    {
        cout<<"1 1 3 "<<endl;
        return;
    }

    if(n==6)
    {
        cout<<"1 1 1 2 2 6 "<<endl;
        return;
    }
    if(n==7)
    {
        cout<<"1 1 1 1 2 2 6 "<<endl;
        return;
    }
    for(int i=0;i<n/2;i++)
    {
        a.push_back(1);
    }
    if(n&1)a.push_back(1);

    int left=n-a.size();
    int last=0;
    int bit=-1;
    for(int i=0;i<32;i++)
    {
        if((1<<i)<=n)
          { bit=i; last=1<<i;}
        else
            break;
    }
    // cout<<left-bit<<endl;

    // cout<<a.size()<<endl;
    for(int i=0;i<left-bit;i++)
    {
        a.push_back(2);
    }
    for(int i=0;i<bit;i++)
    {
        a.push_back(1<<(i+1));
    }

    printv(a);
    return;
}
// Main function and template
int main() {
    int t=1;
    while(t--) {
        solve();
    }
    return 0;
}
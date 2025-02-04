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
    vector<long long >a;
    long long ans=0;
    vi bits;
    for(int i=0;i<n;i++)
    {
        long long m;
        cin>>m;
        ans|=m;
        int k=log2(m);
        bits.push_back(k+1);
        a.push_back(m);
    }
    int cnt=0;
    for(int i=0;i<32;i++)
    {
        if(!((1<<i)&ans))
        {
            cnt=i;
            break;
        }
    }
    int aa=0;
    for(int i=0;i<n;i++)
    {
        if(bits[i]>cnt)aa++;
    }
    cout<<aa<<endl;

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
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
   int n,k;
   cin>>n>>k;
   vi a;
    ip(a,n);
    vi ans(k,0);
    for(int i=0;i<n;i++)
    {
        ans[a[i]%k]++;
    }

    int flag=0;
    int index=-1;
    for(int i=0;i<k;i++)
    {
        if(ans[i]==1)
        {
            flag=1;
            index=i;
            break;
            
        }
    }

    if(flag==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    Ha;
    for(int i=0;i<n;i++)
    {
        if(a[i]%k==index)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    // cout<<index+1<<endl;

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
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
    vi a,b;
    ip(a,n);
    ip(b,n);
    int minus=0,plus=0;
    int a1=0,b1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0&&b[i]==0)
            continue;
        else if(a[i]==1&&b[i]==0)
            a1++;
        else if(a[i]==0&&b[i]==1)
            b1++;
        else if(a[i]==1&&b[i]==1)
           { b1++; plus++;}
        else if(a[i]==-1&&b[i]==0)
            continue;
        else if(a[i]==0&&b[i]==-1)
            continue;
        else if(a[i]==-1&&b[i]==-1)
           {a1--; minus++;}
        else if(a[i]==-1&&b[i]==1)
            b1++;
        else if(a[i]==1&&b[i]==-1)
            a1++;

    }
    if(a1<b1)
    {
        int diff=b1-a1;
        diff/=2;
        int kk=min(diff,minus+plus);
        a1+=kk;
        b1-=kk;
        cout<<min(a1,b1)<<endl;
    }
    else{
        cout<<min(a1,b1)<<endl;
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
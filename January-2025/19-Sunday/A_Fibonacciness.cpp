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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e=0;
    int cnt=1;
    e=a+b;
    if(b+e==c)
    {
        cnt++;
    }
    if(e+c==d)
    {
        cnt++;
    }
    int c2=1,c3=1;
    e=c-b;
    if(a+b==e)
        c2++;
    if(e+c==d)c2++;

    e=d-c;
    if(a+b==e)c3++;
    if(b+e==c)c3++;
    cout<<max(cnt,max(c2,c3))<<endl;
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
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
    ll n, d;
    cin >> n >> d;

    ll cnt = d;
    set<int> s;
    s.insert(1);
    if (d == 5) s.insert(5);

    if(n>=3) s.insert(3);
    if(n>=7) s.insert(7);
    if(n>=9) s.insert(9);

    if(n==2)
    {
        cnt=d;
        for(int i=0;i<2;i++)
        {
            if (cnt % 3 == 0) s.insert(3);
            cnt+=d;
        }
    }
    if(n<9)
    {
        
        int y=9;
        for(int i=1;i<=n;i++)
        {
            int x= __gcd(i,y);
            y/=x;
            if(y==1)
            {
                s.insert(9);
                break;
            }

        }

        
        
    }

    if(n<7)
    {
        ll mult = d;
        for (int i = 0; i < n; i++) {
            if (mult % 7 == 0) {
                s.insert(7);
                break;
            }
            mult = mult * 10 + d;
        }

    }
    
    for (auto it : s) cout << it << " ";
    cout << endl;
    

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
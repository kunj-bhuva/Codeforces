#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v)         \
    for (auto i : v)      \
        cout << i << ' '; \
    cout << endl;
#define ip(a, n)                \
    for (int i = 0; i < n; i++) \
    {                           \
        int xvyz;               \
        cin >> xvyz;            \
        a.push_back(xvyz);      \
    }

void solve()
{
    string s;
    cin >> s;
    vector<int> p;
    int a = 0;
    int n = s.size();
    char c = s[0];
    // if(c=='A')A++;
    // else B++;
    int cnt = 1;
    int A=0,B=0;
    if(c=='B')B++;
   
    for (int i = 1; i < n; i++)
    {
        // if(a[i]=='A')A++;
        if(s[i]=='B') B++;
        
        if (s[i] == c)
        {
            cnt++;
        }
        else
        {
            if(c=='A')
                {p.push_back( cnt);}
            cnt = 1;
            c = s[i];
        }
    }
    if(c=='A')
    p.push_back( cnt);
    ll ans=0;
    
    sort(p);
    for(int i=p.size()-1;i>=0;i--)
    {
        if(B>0)
        {
            ans+=p[i];
            B--;
        }
    }
    cout<<ans<<endl;
    return;
}
// Main function and template
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
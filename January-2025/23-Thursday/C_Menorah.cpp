#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(), t.end()
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
        ll xvyz;                \
        cin >> xvyz;            \
        a.push_back(xvyz);      \
    }

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int zz = 0, oo = 0, zo = 0, oz = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' && b[i] == '0')
            zz++;
        else if (a[i] == '0' && b[i] == '1')
            zo++;
        else if (a[i] == '1' && b[i] == '0')
            oz++;
        else
            oo++;
    }
    int ans = INT_MAX;
    if (oz == 0 && oo ==0 && zo!=0)
    {
        cout << "-1" << endl;
        return;
    }
    else if(oz==0 && oo==0)
    {
        cout<<"0"<<endl;
        return;
    }

    if (oo == 0)
    {
        if (zo != oz)
        {
            cout << "-1" << endl;
            return;
        }
        ans=min(ans,zo+oz);
        
    }
    
    if(oz==0&&zo==0)
    {
        cout<<"0"<<endl;
        return;
    }
    if(oz==0)
    {

        if(zz!=oo-1)
        {
            cout<<"-1"<<endl;
            return;
        }
        ans=min(ans,zz+oo);
    }
    if(zo==oz)ans=min(ans,zo+oz);
    
    if(zz==oo-1)
    {
        ans=min(ans,zz+oo);
    }
    
    if(ans==INT_MAX)cout<<"-1"<<endl;
    else
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
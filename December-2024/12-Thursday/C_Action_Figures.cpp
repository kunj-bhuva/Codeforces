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
    int n;
    string s;
    cin >> n;
    cin >> s;
    ll c = 0;
    // stack<int>st;
    ll sum=0;
    ll ans=0;
    // st.push(1);
    for(int i=n-1;i>=0;i--)
    {
        if(c>=i)
        {
            ans+=i+1;
            c--;
            continue;
        }
        if(s[i]=='1')
        {
            c++;
        }
        else{
            ans+=i+1;
            c--;
            if(c<0)c=0;
        }
    }
    // while(!st.empty())
    // {
    //     int temp=st.top();
    //     cnt+=temp;
    //     st.pop();
    // }
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
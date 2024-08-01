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
    string s;
    cin>>s;
    string ans="";
    ans+=s[0];
    char c=s[0];
    for(int i=1;i<n;i++)
    {
        if(c=='0'&&s[i]=='0')
        {
            continue;
        }
        else if(c=='0'&&s[i]=='1')
        {
            c='1';
            ans+=s[i];
        }
        else if(c=='1'&&s[i]=='1')
        {
            ans+=s[i];
        }
        else
        {
            ans+=s[i];
            c='0';
        }
    }
    int c0=0,c1=0;
    for(auto it:ans)
    {
        if(it=='0')c0++;
        else c1++;

    }
    if(c1>c0)ha;
    else na;
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
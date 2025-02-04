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
    char c=s[0];
    int zero=0,one=0;
    if(c=='0')zero++;
    else one++;
    // cout<<zero<<endl;
    for(int i=1;i<n;i++)
    {
        if(c==s[i])continue;
        else if(c=='0'&&s[i]=='1')
        {
            one++;
            c='1';
        }
        else{
            zero++;
            c='0';
        }
    }
    if(zero==0)cout<<"0"<<endl;
    else if(zero==1&&one==0)cout<<"1"<<endl;
    else if(zero==one)cout<<"1"<<endl;
    else if(one>zero) cout<<"0"<<endl;
    else cout<<"2"<<endl;
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
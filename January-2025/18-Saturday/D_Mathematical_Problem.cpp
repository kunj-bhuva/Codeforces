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
    if(n==2)
    {
        cout<<stoi(s)<<endl;
        return;
    }
    if(n==3)
    {
        string fff=s.substr(0,2);
        string sss=s.substr(1,2);
        // cout<<sss<<'f'<<endl;
        int ffff=stoi(fff);
        int ssss=stoi(sss);
        // cout<<ssss<<'s'<<endl;
        int an=INT_MAX;
        an=min(an,ffff+(s[2]-'0'));
        an=min(an,ffff*(s[2]-'0'));
        an=min(an,ssss+(s[0]-'0'));
        an=min(an,ssss*(s[0]-'0'));
        cout<<an<<endl;
        return;
    }
    bool f=false;
    ll sum=0;
    for(int i=0;i<n;i++)
    {

        if(s[i]=='0')
        {
            f=true;
        }
        if(s[i]!='1')
        {
            sum+=s[i]-'0';
        }
    }
    ll ans=INT_MAX;
    // cout<<sum<<"sum"<<endl;
    if(n>=4&&f)
    {
        cout<<"0"<<endl;
        return;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            int fir=s[i]-'0';
            int sec=s[i+1]-'0';
            int num=fir*10+sec;
            // cout<<num<<"num"<<endl;
            ll temp=sum;

            if(fir!=1)
            {
                temp-=fir;
            }
            if(sec!=1)
            {
                temp-=sec;

            }
            temp+=num;
            ans=min(ans,temp);
        }
    }
    cout<<ans<<endl;
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
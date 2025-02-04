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
        int res=s.size();
        if(n%2==0)
        {
            vector<int>v[2]={vector<int>(26),vector<int>(26)};
            for(int i=0;i<n;i++)
            {
                v[i%2][s[i]-'a']++;
            }
            for(int i=0;i<2;i++)
            {
                int mx=0;
                for(int j=0;j<26;j++)
                {
                    mx=max(mx,v[i][j]);
                }
                res-=mx;
            }
            cout<<res<<endl;
        }
        else
        {
            vector<int>pref[2]={vector<int>(26),vector<int>(26)};
            vector<int>suf[2]={vector<int>(26),vector<int>(26)};
            for(int i=n-1;i>=0;i--)
            {
                suf[i%2][s[i]-'a']++;
            }
            for(int i=0;i<n;i++)
            {
                suf[i%2][s[i]-'a']--;
                int ans=n;
                for(int k=0;k<2;k++)
                {
                    int mx=0;
                    for(int j=0;j<26;j++)
                    {
                        mx=max(mx,suf[1-k][j]+pref[k][j]);
                    }
                    ans-=mx;
                }
                res=min(res,ans);
                pref[i%2][s[i]-'a']++;
            }
            cout<<res<<endl;
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
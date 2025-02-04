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
bool help(string l,string r,int ind_in_string,vector<vector<int>>&dp,int find,int m,int data)
{
    if(ind_in_string>=m)return false;
    // cout<<endl;
    // cout<<dp[data][find]<<" dp[data][search]"<<endl;
    // cout<<ind_in_string<<" ind_in_string"<< find<<" find"<<endl;
    if(dp[data][find]!=-1)
    {
        ind_in_string++;
        // cout<<ind_in_string<<"ind_in_string"<<endl;
        if( ind_in_string>=m)return false;
        bool pp=false;
        for(int k=l[ind_in_string]-'0';k<=r[ind_in_string]-'0';k++)
        {
            // cout<<k<<"k"<<endl;
            pp|= help(l,r,ind_in_string,dp,k,m,dp[data][find]);

        }
        return pp;
    }
    else
    {
        return true;
    }
    return true;
    
}
void solve()
{
    string s;
    cin>>s;
    int m;
    cin>>m;
    string l,r;
    cin>>l;
    cin>>r;
    int n=s.size();
    vector<vector<int>>dp(n,vector<int>(10,-1));
    for(int i=n-2;i>=0;i--)
    {
        int next=i+1;
        char c=s[next]-'0';
        for(int j=0;j<=9;j++)
        {
            dp[i][j]=dp[next][j];
        }
        dp[i][c]=next;
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=9;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int j=0,i=0;
    bool ans=false;
    // cout<<dp[0][4]<<endl;
    // cout<<l[0]-'0'<<"l[0]-'0'"<<endl;
    int xx=-1;
    bool f=false;
    for(int k=l[0]-'0';k<=r[0]-'0';k++)
    {
        // cout<<l[0]<<" "<<r[0]<<endl;
        if(k==s[0]-'0')
        {
            f=true;
            xx=k;
        }
        else
            ans|=help(l,r,i,dp,k,m,0);
    }

    if(f&&m>1)
    {
        for(int k=l[1]-'0';k<=r[1]-'0';k++)
        {
            ans|=help(l,r,1,dp,k,m,0);
        }
    }
    else if(f&&m==1)
    {
        Na;
        return;
    }

    if(ans==true)Ha;
    else Na;
    // cout<<s[0]<<endl;
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
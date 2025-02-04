#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }
 
int help(int rem,int ind,vector<int>&p,vector<vector<int>>&dp)
{
    if(ind==p.size())return 0;
    if(dp[rem][ind]!=-1)return dp[rem][ind];
    int take=0,nottake=0;
    if(rem >= p[ind])
    {   
        take=1+help(rem-p[ind],ind+1,p,dp);
        
    }
    nottake=help(rem+1,ind+1,p,dp);
    return dp[rem][ind]=max(take,nottake);
}
void solve()
{
   int n;
   cin>>n;
   vi a;

   ip(a,n);
   
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    
    vector<int>p;

    for(auto it:mp)
    {
        p.push_back(it.second);
    }
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    int rem=0,ind=0,count=0;

    count=help(rem,ind,p,dp);
    
    cout<<mp.size()-count<<endl;
}

int main() 
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
// #define mod 998244353
#define mod 1000000007



signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
// sieve();
while(t--){
     int n;
     cin>>n;
     vi v(n,0);
     read(v);
     map<pair<int,int>,int> ab;
     map<pair<int,int>,int> bc;
     map<pair<int,int>,int> ac;
     map<vector<int>,int> ab3;
     map<vector<int>,int> bc3;
     map<vector<int>,int> ac3;
     int ans=0;
     for(int i=0;i<n-2;i++)
     {
         int a=v[i];
         int b=v[i+1];
         int c=v[i+2];
         ab[{a,b}]++;
         bc[{b,c}]++;
         ac[{a,c}]++;
         ab3[{a,b,c}]++;
         bc3[{b,c,a}]++;
         ac3[{a,c,b}]++;
         ans=ans + ab[{a,b}] - ab3[{a,b,c}];
         ans=ans + bc[{b,c}] - bc3[{b,c,a}];
         ans=ans + ac[{a,c}] - ac3[{a,c,b}];
        }
     cout<<ans<<endl;
}

return 0;
}
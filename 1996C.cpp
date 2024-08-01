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
   int n,q;
   cin>>n>>q;
   string a,b;
   cin>>a>>b;
   vector<vector<int>>preA(n+1,vector<int>(26,0));
    vector<vector<int>>preB(n+1,vector<int>(26,0));

   preA[1][a[0]-'a']++;
   for(int i=1;i<n;i++)
   {
        int k = a[i]-'a';

        for(int j=0;j<26;j++)
        {
            preA[i+1][j]=preA[i][j];
            if(k==j)
            {
                preA[i+1][j]++;
            }
        }
   }

   preB[1][b[0]-'a']++;
   for(int i=1;i<n;i++)
   {
        int k=b[i]-'a';

        for(int j=0;j<26;j++)
        {
            preB[i+1][j]=preB[i][j];
            if(k==j)
            {
                preB[i+1][j]++;
            }
        }
   }

   for(int i=0;i<q;i++)
   {
        int l=0;
        int r=0;
        cin>>l>>r;
        l--;
        vector<int>strA(26,0);
        vector<int>strB(26,0);
        for(int j=0;j<26;j++)
        {
            strA[j]=preA[r][j]-preA[l][j];
            strB[j]=preB[r][j]-preB[l][j];
        }
        int ans=0;
        for(int j=0;j<26;j++)
        {
            if(strA[j]==strB[j])continue;
            else{
                ans+=abs(strA[j]-strB[j]);
            }
            
        }
        cout<<(ans/2)<<endl;

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
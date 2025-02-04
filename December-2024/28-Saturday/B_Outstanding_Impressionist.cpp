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
#.ldefine printv(v) for(auto i : v) cout << i << ' '; cout << endl;
/#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }
/////
void solve()
{
   int n;
   cin>>n;
   string s="";
   set<int>st;
   unordered_map<int,int>mp;
   int maxi=0;
   vector<pair<int,int>>p;
   for(int i=0;i<n;i++)
   {
        int l,r;
        cin>>l>>r;
        if(l==r)
        {
            st.insert(l);
            mp[l]++;
        }
        maxi=max(maxi,r);
        p.push_back(make_pair(l,r));

   }
   vector<int>ans(maxi+1,0);
   for(int i=1;i<=maxi;i++)
   {
        if(st.find(i)!=st.end())
        {
            ans[i]=ans[i-1]+1;
        }
        else
        {
            ans[i]=ans[i-1];
        }
        
   }
//    printv(ans);
   for(auto it:p)
   {
        int l=it.first;
        int r=it.second;
        if(l==r)
        {
            if(mp[l]>1)
            {
                s+='0';

            }
            else
            {
                s+='1';
            }

        }
        else
        {
        if((r-l+1)==ans[r]-ans[l-1])
        {
            s+='0';
        }
        else
        {
            s+='1';
        }
        }
   }
   cout<<s<<endl;
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
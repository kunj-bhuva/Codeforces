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
   vector<char>a;
   map<char,int>mp;
   for(int i=0;i<n;i++)
   {
        mp[s[i]]=1;
   }
   for(auto it:mp)
   {
        a.push_back(it.first);

   }
   
   unordered_map<char,char>key;
   for(int i=0;i<a.size();i++)
   {
        key[a[i]]=a[a.size()-1-i];
   }
   for(int i=0;i<n;i++)
   {
        cout<<key[s[i]];
   }
   cout<<endl;
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
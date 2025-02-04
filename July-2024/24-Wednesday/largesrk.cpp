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
#define ip(a, n) for(int i = 0; i < n; i++) { long long xvyz; cin >> xvyz;  mp[xvyz]++;}

void solve()
{
    int n;
    cin>>n;
    vi a;
    unordered_map<long long,long long>mp;
    
    ip(a,n);

    long long maxi=0;
    vector<long long>ans;

    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    
    sort(ans);
    
    for(int i=0;i<ans.size();i++)
    {
        

        long long dis=ans.size()-i;
        dis-=(dis%ans[i]);
        
        long long kk =1LL*dis*ans[i];

        // cout<<kk<<" "<<ans.size()-i<<endl;
        maxi=max(maxi,kk);
    }
    cout<<maxi<<endl;   

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
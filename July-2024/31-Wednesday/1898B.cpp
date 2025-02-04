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
    int n,m,k;
    cin>>n>>m>>k;
    vi a;
    ip(a,n);
    vi b;
    unordered_map<int,int>mp;
    int cnt=0;
    int ans=0;
    for(int i = 0; i < m; i++) { int xvyz; cin >> xvyz; b.push_back(xvyz);mp[xvyz]++; }
    int l=0,r=0;
    while(r<m)
    {
        if(mp[a[r]]>0)
        {
            cnt++;
        }
        mp[a[r]]--;
        r++;
    }
    if(cnt>=k)ans++;
    while(r<n)
    {
        mp[a[l]]++;
        if(mp[a[l]]>0)cnt--;
        if(mp[a[r]]>0)cnt++;
        mp[a[r]]--;
        r++;
        l++;
        if(cnt>=k){ans++;}
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
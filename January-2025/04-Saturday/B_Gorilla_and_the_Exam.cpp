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
    int n,k;
    cin>>n>>k;
    vii a;
    ip(a,n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    
    vector<int>freq;
    for(auto it:mp)
    {
        freq.pb(it.second);
    }
    sort(freq);
    int m=freq.size();
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        if(freq[i]<=k)
        {
            ans++;
            k-=freq[i];
        }
        else
        {
            break;
        }
    }
    if((m-ans)==0)cout<<"1"<<endl;
    else
    cout<<m-ans<<endl;
    
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
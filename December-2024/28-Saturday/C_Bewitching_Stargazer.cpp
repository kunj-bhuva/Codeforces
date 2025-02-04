// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector<long long int> vii;
// typedef vector<int> vi;

// // Macro definitions
// #define sort(t) sort(t.begin(),t.end())
// #define pb(x) push_back(x)
// #define ppb(x) pop_back(x)
// #define fi(i, a, b) for (ll i = a; i < b; i++)
// #define Na cout << "NO" << endl
// #define Ha cout << "YES" << endl
// #define na cout << "No" << endl
// #define ha cout << "Yes" << endl

// // Additional macros for printing and input
// #define printv(v) for(auto i : v) cout << i.first << ' '<<i.second<<endl; cout << endl;
// #define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

// void solve()
// {
//     ll n,k;
//     cin>>n>>k;
//     ll x=n;
//     ll ans=INT_MAX;
//     ll prev=n;
//     vector<pair<int,int>>p;
//     while((x)>=k)
//     {
//         if(x%2==0)
//         {
//             x/=2;
//         }
//         else
//         {
//             prev=x;
//             ans=x/2+1;
//             x/=2;
//             p.push_back(make_pair(ans,(prev)));
//         }

//     }
//     if(ans==INT_MAX)
//     {
//         cout<<'0'<<endl;
//         return;
//     }
//     ll cnt=0;
//     printv(p)
//     // prev--;
//     // ll temp=n/ans;
//     // cnt=(temp*(temp+1))/2;
//     // cnt*=ans;
//     // cout<<prev<<" "<<n<<" "<<ans<<endl;
//     // prev++;
//     // prev/=2;
//     // for(int i=ans;i<=n;i+=prev)
//     // {
//     //     cnt+=i;
//     // }

//     for(int i=0;i<p.size();i++)
//     {
//         int firs=p[i].first;
//         int diff=p[i].second;
        
//         for(int j=firs;j<=n;j+=diff)
//         {
//             cnt+=j;
//             // cout<<j<<"ok"<<endl;
//         }
//     }
//     cout<<cnt<<endl;
//     return;
// }
// // Main function and template
// int main() {
//     int t; cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }








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
    ll 
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
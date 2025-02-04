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
    // vector<vector<int>>m(n,vector<int>(n,0));
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         char c;
    //         cin>>c;
    //         m[i][j]=c-'0';
    //     }
    // }
    // vector<vector<int>>ans(n/k,vector<int>(n/k,0));
    // for(int i=0;i<n;i+=k)
    // {
    //     for(int j=0;j<n;j+=k)
    //     {
    //         ans[i/k][j/k]=m[i][j];
    //     }
    // }
    // for(int i=0;i<k;i++)
    // {
    //     for(int j=0;j<k;j++)
    //     {
    //         cout<<ans[i][j];
    //     }
    //     cout<<endl;
    // }
    // return;




    for(int i=0;i<n;i++)
    {
             string s;
             cin>>s;
             int f= 0;
             for(int j=0;j<n;j++)
             {
                if(i%k==0&&j%k==0)
                {
                    cout<<s[j];
                    f=1;
                }
            }
            if(f==1) cout<<endl;

    }

    

}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
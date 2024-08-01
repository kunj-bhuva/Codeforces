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
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m,0));
    vector<vector<int>>b(n,vector<int>(m,0));
    vector<int>arow,brow;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            char kk;
            cin >> kk;
            a[i][j] = kk-'0';
        }
    }
     
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char kk;
            cin>>kk;
            b[i][j]=kk-'0';
        }

    }
    for(int i=0;i<m;i++)
    {
        int sum1=0,sum2=0;
        for(int j=0;j<n;j++)
        {
           sum1+=a[j][i];
           sum2+=b[j][i];

        }
        if((sum1%3)!=(sum2%3))
        {
            cout<<"NO"<<endl;
            return;
        }
        

    }
    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=0;j<m;j++)
        {
           sum1+=a[i][j];
           sum2+=b[i][j];

        }
        if((sum1%3)!=(sum2%3))
        {
            cout<<"NO"<<endl;
            return;
        }
        

    }

    // for(int i=0;i<n;i++)
    // {
    //     if((arow[i]%3)!=(brow[i]%3))
    //     {
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    cout<<"YES"<<endl;
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
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
    string s;
    cin>>s;
    int maxpos=-1+m;
    for(int i=0;i<n;i++)
    {
        if(maxpos<i){
            cout<<"NO"<<endl;
            return;
        }
        if(s[i]=='W')
        {
            if(k==0)
            {
                if(maxpos<=i)
                {
                    cout<<"NO"<<endl; return;
                }
            }
            else
            {
                if(maxpos>i)
                {
                    continue;
                }
                else
                {
                    maxpos+=1;
                    k--;
                }
            }
            
        }
        else if(s[i]=='L')
        {
            maxpos=max(maxpos,i+m);

        }
    }
    if(maxpos>=n)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
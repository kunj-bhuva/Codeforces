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
int find(int i,string& a,string& b)
{

    int s=i;
    for(int j=0;j<a.size();j++)
    {
        if(a[j]==b[i])
        {
            i++;
        }
    }
    return i-s;
}
void solve()
{
    string a,b;
    cin>>a>>b;
    int mini=INT_MIN;
    for(int i=0;i<b.size();i++)
    {
        mini=max(mini,find(i,a,b));
    }
    if(mini==INT_MIN)mini=0;
    cout<<a.size()+b.size()-mini<<endl;
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
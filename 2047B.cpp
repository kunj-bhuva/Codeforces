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
    vector<int>a(26,0);
    int maxi=0,index=0;
    int mini=INT_MAX,index1=0;
    for(int i=0;i<n;i++)
    {
        a[s[i]-'a']++;
        
    }

    for(int i=0;i<26;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            index=i;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]<mini && a[i]!=0 && i!=index)
        {
            mini=a[i];
            index1=i;
        }
    }
    // cout<<index1<<endl;
    // cout<<index<<endl;
    char c;
    for(int i=0;i<n;i++)
    {
        if(s[i]-'a'==index)
        {
            c=s[i];
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]-'a'==index1)
        {
            s[i]=c;
            
                break;
        }
    }
    
    // s[index1]=s[index];
            
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
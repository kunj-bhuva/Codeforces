#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v)         \
    for (auto i : v)      \
        cout << i << ' '; \
    cout << endl;
#define ip(a, n)                \
    for (int i = 0; i < n; i++) \
    {                           \
        int xvyz;               \
        cin >> xvyz;            \
        a.push_back(xvyz);      \
    }

void solve()
{
    string s;
    cin >> s;
    int l1 = 1, r1 = s.size();
    int l2 = -1, r2 = -1;
    int n=s.size();
    int f=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            f=i;
            break;
        }
    }
    if(f==-1)
    {
        cout<<l1<<" "<<r1<<" "<<"1 1"<<endl;
        return;
    }
        int bits=n-f;
        string maxi="";
        int l=-1,r=-1;
        for(int i=0;i<f;i++)
        {
            string ss=s.substr(i,n-f);
            string tempXOR = ""; 
            for (int j = 0; j < ss.size(); j++)
            {
                char xoredChar = ((s[j+(f)] - '0') ^ (ss[j] - '0')) + '0'; // XOR and convert to char
                // cout<<j+(f)<<endl;
                tempXOR += xoredChar;
            }
            if (tempXOR > maxi)
            {
                maxi = tempXOR;
                l = i + 1; // Store 1-based index of the substring
                r = i + ss.size(); // End position of the substring
            }
        }   
    
    cout << l1 << " " << r1 << " " << l << " " << r << endl;
}
// Main function and template
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
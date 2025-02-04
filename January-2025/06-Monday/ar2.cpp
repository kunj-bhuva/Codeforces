#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;
#include <cctype>

// Macro definitions
// #define sort(t) sort(t.begin(),t.end())
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

char solve()
{
    string s;
    cin>>s;

    if( s.size()==10 )
    {
        string year=s.substr(3,4 );
        if(isupper(s[0]) && isupper(s[1]) && isupper(s[2]) && s[0]!=s[1]&&s[1]!=s[2]&&s[0]!=s[2] && stoi(year) >= 1900 && stoi(year) <= 2019 && (s[7]=='1'||s[7]=='2'||s[7]=='5') && s[8]=='0'  && isupper(s[9])   )
        {
            return s[0];
            
        }
        else
        {
            return s[9];
        }
    }
    if(s.size()==11)
    {
        string year=s.substr(3,4 );
        if(isupper(s[0]) && isupper(s[2]) && isupper(s[1]) && s[0]!=s[1]&&s[1]!=s[2]&&s[0]!=s[2] && stoi(year) >= 1900 && stoi(year) <= 2019 && (s[7]=='1'||s[7]=='2'||s[7]=='5') && s[8]=='0' && s[9]=='0' && isupper(s[10])   )
        {
            cout<<year<<endl;
            return s[0];
            
        }
        else
        {
            return s[10];
        }
    }
    if(s.size()==12)
    {
        string year=s.substr(3,4 );
        if(isupper(s[0]) && isupper(s[2]) && isupper(s[1]) && s[0]!=s[1]&&s[1]!=s[2]&&s[0]!=s[2] && stoi(year) >= 1900 && stoi(year) <= 2019 && (s[7]=='1') && s[8]=='0' && s[9]=='0' && s[10]=='0' && isupper(s[11])   )
        {
            return s[0];
            
        }
        else
        {
            return s[11];
        }
    }
    return s[s.size()-1];
    
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
         cout<<solve()<<endl;
    }
    return 0;
}
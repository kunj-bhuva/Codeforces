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

int lengthOfNumber(int num) {
    if (num == 0) {
        return 1; // Special case for zero
    }
    // If the number is negative, make it positive
    num = std::abs(num);

    // Calculate the number of digits
    int length = 0;
    while (num > 0) {
        num /= 10;
        length++;
    }
    return length;
}

void solve() {
    int n;
    cin >> n;
    string s = to_string(n);
    int l=lengthOfNumber(n);

    vector<pair<int,int>>lp;
    for (int a = 1; a <= 10000; a++) 
    {
        long long gg= l*a;

        for(int len=1;len<=6;len++) 
        {
            int b= gg-len ;
            if(b==0)continue;
            long ans= a*n -b;
            string a1=to_string(ans);

            string extra="";
            for(int i=0;i<6;i++)
            {
                extra+=s;
            }
            string a2=extra.substr(0,len);

            if(a1==a2)
            {
                lp.push_back({a,b});
                
            }
        }
    }





    cout<<lp.size()<<endl;
    for(auto it:lp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return;
}

// Main function and template
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

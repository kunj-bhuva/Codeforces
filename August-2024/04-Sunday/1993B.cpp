#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<long long > vi;

// Macro definitions
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz);  }

void solve()
{
    int n;
    cin>>n;
    vi a;
    ip(a,n);

    vector<long long> even;

    long long odd = 0;

    for(int i = 0; i < n; i++) 
    {
        if(a[i] % 2 == 0) 
            even.push_back(a[i]);
        else 
            odd = max(odd, a[i]);
    }
    if(even.size()==0||even.size()==n)
    {
        cout<<"0"<<endl;
        return;
    }
    
    sort(even.begin(), even.end());

    int cnt = even.size();
    for(int i = 0; i < even.size(); i++) {
        if(even[i] < odd) {
            odd += even[i];
        } else {
            cnt++;
            break;
        }
    }

    cout << cnt << endl;
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
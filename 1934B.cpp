#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Additional macros for printing and input
#define printv(v) for (auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

ll fif(ll &n) {
    ll ans = n / 15;
    n %= 15;
    return ans;
}

ll ten(ll &n) {
    ll ans = n / 10;
    n %= 10;
    return ans;
}

ll six(ll &n) {
    ll ans = n / 6;
    n %= 6;
    return ans;
}

ll three(ll &n) {
    ll ans = n / 3;
    n %= 3;
    return ans;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans=0;
        vector<int>key={1,2,1,2,3,1,2,3,2,1,2,2,2,3,1,2,3,2,3,2,2,3,3,3,2,3,3,3,4,2};
        if(n>30)
        {
            ans+=n/15;
            n%=15;
            ans--;
            n+=15;
            ans+=key[n-1];
        }
        else
        {
            ans=key[n-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}

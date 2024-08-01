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




void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    stack<pair<int, char>> st;
    long long cnt = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            st.push(make_pair(i, s[i]));
        } else if (s[i] == '_') {
            if (st.empty()) {
                st.push(make_pair(i, s[i]));
            } else {
                pair<int, char> p = st.top();
                st.pop();
                cnt += (i - p.first);
            }
        } else {
            pair<int, char> p = st.top();
            st.pop();
            cnt += (i - p.first);
        }
    }

    cout << cnt << endl;
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
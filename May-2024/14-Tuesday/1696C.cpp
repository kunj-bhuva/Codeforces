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
#define Na cout << "No" << endl
#define Ha cout << "Yes" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }

bool check(int &v1, int &o1, int &v2, int &o2, int k) {
    while (v1 % k == 0) {
        v1 /= k;
        o1 *= k;
    }
    while (v2 % k == 0) {
        v2 /= k;
        o2 *= k;
    }
    if (v1 != v2) return 0;
    if (o1 > o2) {
        o1 -= o2;
        o2 = 0;
    } else {
        o2 -= o1;
        o1 = 0;
    }
    return 1;
}

void solve() {
    ll n, k,m;
    cin >> n >> k;
    vii a;
    ip(a, n);
    
    cin >> m;
    vii b;
    ip(b, m);
    ll i = 0, j = 0;
    int v1 = 0, v2 = 0, o1 = 0, o2 = 0;

    while (i < n && j < m) {
        if (o1 == 0) v1 = a[i], o1 = 1;
        if (o2 == 0) v2 = b[j], o2 = 1;
        if (!check(v1, o1, v2, o2, k)) {
            Na;
            return;
        }
        if (o1 == 0) i++;
        if (o2 == 0) j++;
    }

    // while (i < n) {
    //     if (o1 == 0) v1 = a[i], o1 = 1;
    //     if (!check(v1, o1, v2, o2, k)) {
    //         Na;
    //         return;
    //     }
    //     if (o1 == 0) i++;
    // }

    // while (j < m) {
    //     if (o2 == 0) v2 = b[j], o2 = 1;
    //     if (!check(v1, o1, v2, o2, k)) {
    //         Na;
    //         return;
    //     }
    //     if (o2 == 0) j++;
    // }

    if (i != n || j != m) {
        Na;
        return;
    }
    Ha;
    return;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

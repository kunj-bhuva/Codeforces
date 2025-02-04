#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

int main() {
    int t; cin >> t;
    while(t--) {
        long long k, x, a;
        cin >> k >> x >> a;
        long long u = 0;
        int ok = 1;
        for(int i = 0; ok &&i<x ; i++) {
            long long v = (u + k - 1) / (k - 1);
            u += (v == 0) ? 1 : v;
            ok = u <= a;
        }
        if(k * (a - u) > a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

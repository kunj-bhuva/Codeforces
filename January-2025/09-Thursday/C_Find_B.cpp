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
const int N = 300043;
 
int t;
int n, m;
int a[N];
long long sum[N];
int cnt1[N];
// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    cin >> n >> m;
        memset(sum, 0, sizeof(sum[0]) * (n + 5));
        memset(cnt1, 0, sizeof(cnt1[0]) * (n + 5));
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum[i + 1] = sum[i] + a[i];
            cnt1[i + 1] = cnt1[i] + (a[i] == 1);
        }
        
        for (int i = 0; i < m; ++i) {
            int l, r;
            cin >> l >> r;
            --l;
            int cur_cnt1 = cnt1[r] - cnt1[l];
            long long cur_sum = sum[r] - sum[l];
            
            if((r - l) + cur_cnt1 <= cur_sum && r - l > 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    
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
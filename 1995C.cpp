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

bool hasNonContinuousOne(const vector<int>& vec) {
    bool foundFirstNonOne = false;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] != 1) {
            foundFirstNonOne = true;
        } else if (foundFirstNonOne) {
            return true;
        }
    }
    return false;
}


bool isPowerOf2(int n) {
    return (n & (n - 1)) == 0;
}
 long long findLeftmostBitAndReturn(long ans) {
    if (ans == 0) {
        return 0;  // Handle the case when ans is zero (no bits set)
    }

    long long leftmost_position = static_cast<long long>(log2(ans));
    long long result = pow(2, leftmost_position + 1);

    return result;
}
// Function to find the next power of 2 greater than or equal to f
long long nextPowerOf2(float f) {
    if (f <= 0) {
        return 1;
    }

    // Apply ceiling to the float and store in ans
     long long ans = static_cast<long long>(std::ceil(f));

    // Check if ans is already a power of 2
    if ((ans & (ans - 1)) == 0) {
        return ans;
    }

        return findLeftmostBitAndReturn(ans);

    

}


void solve() {
    int n;
    cin >> n;
    
    vi a;
    ip(a, n);


    vector<long long> po(n, 1);
    int ans = 0;

    bool b = hasNonContinuousOne(a);
    if (b) {
        cout << "-1" << endl;
        return;
    }

    for (int i = 1; i < n; i++) {
        long long prev = a[i - 1];
        long long prevpower = po[i - 1];

        if (a[i] == 1) continue;

        float f = (1.0 * prevpower * log2(prev)) / log2(a[i]);
        long long nextPower = nextPowerOf2(f);
        po[i] = nextPower;
        ans += log2(nextPower);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

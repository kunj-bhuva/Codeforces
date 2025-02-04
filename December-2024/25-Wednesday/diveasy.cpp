#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Constants
const ll MOD = 1e9 + 7;

// Macro definitions
#define pb(x) push_back(x)
#define ip(a, n) for (int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

// Function to calculate prime factorization of M!
unordered_map<int, ll> factorial_prime_factors(int M) {
    unordered_map<int, ll> prime_factors;
    for (int i = 2; i <= M; i++) {
        int x = i;
        for (int p = 2; p * p <= x; p++) {
            while (x % p == 0) {
                prime_factors[p]++;
                x /= p;
            }
        }
        if (x > 1) {
            prime_factors[x]++;
        }
    }
    return prime_factors;
}

// Function to merge two factorizations
unordered_map<int, ll> merge_factors(unordered_map<int, ll> a, unordered_map<int, ll> b) {
    for (auto it = b.begin(); it != b.end(); ++it) {
        a[it->first] += it->second;
    }
    return a;
}

// Function to calculate the number of divisors from prime factorization
ll calculate_divisors(unordered_map<int, ll> &factors, ll mod) {
    ll divisors = 1;
    for (auto it = factors.begin(); it != factors.end(); ++it) {
        divisors = (divisors * (it->second + 1)) % mod;
    }
    return divisors;
}

// Function to factorize a number
unordered_map<int, ll> factorize(int x) {
    unordered_map<int, ll> factors;
    for (int p = 2; p * p <= x; p++) {
        while (x % p == 0) {
            factors[p]++;
            x /= p;
        }
    }
    if (x > 1) {
        factors[x]++;
    }
    return factors;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vi a;
    ip(a, n);
    auto factorial_factors = factorial_prime_factors(m);
    vector<ll> ans;
    for (int i = 0; i < n; i++) {
        auto ai_factors = factorize(a[i]);
        auto combined_factors = merge_factors(ai_factors, factorial_factors);
        ll divisors = calculate_divisors(combined_factors, MOD);
        ans.pb(divisors);
    }

    // Print results
    for (ll res : ans) {
        cout << res << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}

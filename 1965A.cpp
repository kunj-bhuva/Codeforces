#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vll;
typedef vector<int> vi;
typedef pair<long long int, long long int> pr;
typedef pair<pr, pr> pipii;

#define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define ff first
#define ss second
#define cv(a) for(ll i = 0 ; i<a.size() ; i++) cin >> a[i];
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define fib(i, b, a) for(ll i = b-1 ; i >= a ; i--)
#define ip(a, n) for(ll i = 0 ; i<n ; i++){ll kkkk; cin>>kkkk; a.pb(kkkk)}
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

vector<long long> factors(long long n) {
    vector<long long> result;
    for (long long i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            result.push_back(i);
            if (n / i != i) {
                result.push_back(n / i);
            }
        }
    }
    return result;
}

bool isPowerOfTwo(long long n) {
    return n && !(n & (n - 1));
}

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isSubstring(const string &mainString, const string &subString) {
    return mainString.find(subString) != string::npos;
}

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

string lexographicSmaller(string s1, string s2) {
    ll n = min(s1.length(), s2.length());
    for (ll i = 0; i < n; ++i) {
        if (s1[i] < s2[i]) {
            return s1;
        } else if (s1[i] > s2[i]) {
            return s2;
        }
    }
    return s1.length() < s2.length() ? s1 : s2;
}

ll maximum(ll x, ll y) {
    if (x >= y) return x;
    return y;
}

ll minimum(ll x, ll y) {
    if (x <= y) return x;
    return y;
}

int main() {
    ios_base::sync_with_stdio(false);
    ll t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vll a;

        ip(a,n);
        vll diff;
        
        for(ll i=0;i<n-1;i++)
        {
            diff.pb(a[i+1]-a[i]);
        }
        for(ll i=0;i<diff.size();i++)
        {

        }
        // Your code here
    }
    return 0;
}
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
#include <cmath>

bool isPrime(long long p)
{
    if (p <= 1) return false;
    if (p <= 3) return true;   // 2 and 3 are prime numbers
    if (p % 2 == 0 || p % 3 == 0) return false;
    for (long long i = 5; i * i <= p; i += 6)
    {
        if (p % i == 0 || p % (i + 2) == 0) return false;
    }
    return true;
}

void solve()
{
    long long a;
    cin>>a;
    int flag=2;
    long long ans=1;
    while(flag)
    {
        if(isPrime(a))
        {
            ans*=a;
            flag--;
        }
        a++;
    }
    cout<<ans<<endl;
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
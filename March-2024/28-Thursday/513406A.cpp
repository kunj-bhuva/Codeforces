#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vll;
typedef pair <long long int,long long int> pr;
typedef pair<pr,pr> pipii;
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define ff first
#define ss second
#define cv(a) for(ll i = 0 ; i<a.size() ; i++) cin >> a[i];
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define fib(i,b,a) for(ll i = b-1 ; i >= a ; i--)
#define inv(a,n) for(ll i = 0 ; i<n ; i++) cin >> a[i]
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
//kunj 
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}



int main() {
    ios_base::sync_with_stdio(false);
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        map<pair<ll, ll>, ll> mp;
        for (ll i = 1; i <= n; i++) {
            for (ll j = i; j <= n; j++) {
                ll sq = i * i + j * j;
                ll rt = (ll)sqrt(sq);
                if (rt * rt == sq && rt <= n && (isPrime(i) || isPrime(j) || isPrime(rt))) {
                    pair<ll, ll> tp;
                    tp.ff = i;
                    tp.ss = j;
                    mp[tp]++;
                }
            }
        }
        cout << mp.size() << endl;
    }
    return 0;
}
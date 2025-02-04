#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long ll> vii;
typedef vector<ll> vi;

// Macro definitions
#define sort(t) sort(t.begin(), t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v)         \
    for (auto i : v)      \
        cout << i << ' '; \
    cout << endl;
#define ip(a, n)                \
    for (ll i = 0; i < n; i++) \
    {                           \
        ll xvyz;               \
        cin >> xvyz;            \
        a.push_back(xvyz);      \
    }

bool check(ll ans,ll k, ll sum, ll maxi ) {
	ll target = maxi * ans;
	ll present = sum;
	ll start = 0;
	ll end = 1e12;
	ll times = end;
	while(start <= end) {
		ll mid = (start + end) / 2;
		if(target + ans * mid >= present) {
			times = min(times, mid);
			end = mid - 1;
		}
		else start = mid + 1;
	}
	target += times * ans;
	k -= target - present;
	return k >= 0;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vii a;
    ll sum=0,maxi=0;
    for (ll i = 0; i < n; i++)
    {
        ll aaa;
        cin >> aaa;
        a.push_back(aaa);
        maxi=max(maxi,aaa);
        sum+=aaa;
        

    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(check(i,k,sum,maxi))
        {
            ans=i;
        }
    }
    cout<<ans<<endl;

    return;
}
// Main function and template
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
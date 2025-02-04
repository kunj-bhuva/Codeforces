#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vll;
typedef pair<long long int,long long int> pr;
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
#define ha cout << "Yes" << endl
int main() {
    ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        map<int, int> mp, mp2;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        for (int x : b)
            mp[x]++;

        int cur = 0, ans = 0;

        for (int i = 0; i < m; i++)
            mp2[a[i]]++;

        for (auto it : mp) {
            int val = it.first;
            if (mp2.find(val) != mp2.end()) {
                cur += min(mp[val], mp2[val]);
            }
        }

        if (cur >= k)
            ans++;

        if (n == m) {
            cout << ans << endl;
            continue;
        }

        for (int i = 0; i < n - m; i++) 
        {
            if (a[i] != a[i + m]) 
            {
            cur -= min(mp[a[i]], mp2[a[i]]);
            cur -= min(mp[a[i + m]], mp2[a[i + m]]);
            mp2[a[i]]--;
            mp2[a[i + m]]++;
            cur += min(mp[a[i]], mp2[a[i]]);
            cur += min(mp[a[i + m]], mp2[a[i + m]]);
            }

            if(cur >= k)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}

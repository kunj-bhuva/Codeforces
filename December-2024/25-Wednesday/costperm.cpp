#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

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

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<int> vis(n + 1, 0);
    priority_queue<int, vector<int>, greater<int>> p;

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            int cnt = 0;
            int x = i;
            while (vis[x] != 1)
            {
                vis[x] = 1;
                x = a[x];
                cnt++;
            }
            p.push(cnt);
            
        }
    }

    ll ans = 0;
    if(p.size()==1)
    {
        cout<<"0"<<endl;
        return;
    }
    while (p.size() >= 2)
    {
        int x = p.top();
        p.pop();
        int y = p.top();
        p.pop();
        p.push(x + y);
        ans+=x+y;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

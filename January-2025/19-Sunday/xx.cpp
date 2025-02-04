#include <bits/stdc++.h>
using namespace std;
using ll = long long int;


map <ll,ll> lp;
void dfs(ll node, vector<vector<ll>> &adj, map<ll, vector<ll>> &mp, vector<bool> &vis, ll cnt)
{
    vis[node] = 1;
    lp[node] = cnt;
    mp[cnt].push_back(node);
    for (auto &i : adj[node])
    {
        if (!vis[i])
        {
            dfs(i, adj, mp, vis, cnt);
        }
    }
    return;
}

void solve()
{
    lp.clear();
    ll n, m1, m2;
    cin >> n >> m1 >> m2;
    vector<vector<ll>> adj1(n + 1), adj2(n + 1);
    vector<vector<ll>> tmp;
    for (ll i = 0; i < m1; i++)
    {
        ll a, b;
        cin >> a >> b;
        tmp.push_back({a, b});
    }
    for (ll i = 0; i < m2; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj2[a].push_back(b);
        adj2[b].push_back(a);
    }
    map<ll, vector<ll>> mp;
    vector<bool> vis(n + 1, 0);
    ll cnt = 0;
    
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cnt++;
            dfs(i, adj2, mp, vis, cnt);
        }
    }
    ll ans = 0;
    for (auto &i : tmp)
    {
        if (lp[i[0]] != lp[i[1]])
        {
            ans++;
        }
        else
        {
            adj1[i[0]].push_back(i[1]);
            adj1[i[1]].push_back(i[0]);
        }
    }
    vector<bool> visited_f(n + 1, 0);
    map<ll, vector<ll>> mp1;
    for (ll i = 1; i <= cnt; i++)
    {
        dfs(mp[i][0], adj1, mp1, visited_f, cnt);
        for (auto &j : mp[i])
        {
            if (!visited_f[j])
            {
                dfs(j, adj1, mp1, visited_f, cnt);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
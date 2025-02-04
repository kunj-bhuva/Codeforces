#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define start(t) t.begin(),t.end()
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }
int dfs_f(int node, vector<int> f[], vector<int> &visited_g, vector<int> &visited_f) {
    visited_f[node] = 1;
    int count = 0;
    
    for (auto it = f[node].begin(); it != f[node].end(); ) {
        int neighbor = *it;
        if (!visited_f[neighbor]) {
            if (!visited_g[neighbor]) {
                count++; // Edge not present in g, increase count
                it = f[node].erase(it); // Remove the edge from f
            } else {
                count += dfs_f(neighbor, f, visited_g, visited_f);
                ++it;
            }
        } else {
            ++it;
        }
    }
    return count;
}



void dfs(int node, vector<int> adj[], vector<int> &visited,int cnt,map<int,vector<int>>&mp, map <int,int>&xx)
{
    visited[node] = 1; // Mark node as visited
     xx[node] = cnt;
    mp[cnt].push_back(node);

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited,cnt,mp,xx);
        }
    }
    
}



void solve()
{
    int n,m1,m2;
    cin>>n>>m1>>m2;
    vector<int>g[n+1];
    vector<int>other[n+1];

    map<int,vector<int>>mp;
    map <int,int> xx;

    vector<vector<int>>f;

    for(int i=0;i<m1;i++)
    {
        int a,b;
        cin>>a>>b;
        f.push_back({a,b});
        
    }

    for(int i=0;i<m2;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);   

    }
    vector<int> visited_g(n+1, 0);
    vector<int> visited_f(n+1, 0);


    int cnt=0,final=0;
    for(int i=1;i<=n;i++)
    {
        
        if(!visited_g[i])
        {
            cnt=cnt+1;
            dfs(i, g, visited_g,cnt,mp,xx);
        }

    }
    for(auto it:f)
    {
        if(xx[it[0]]==xx[it[1]])
        {
            other[it[0]].push_back(it[1]);
            other[it[1]].push_back(it[0]);
        }
        else
        {
            final++;
        }

    
    }


    map<int,vector<int>>mp_f;
    
    for(ll i = 1; i <= cnt; i++)
    {
        dfs(mp[i][0], other, visited_f, cnt,mp_f,xx);
        for (auto &j : mp[i])
        {
            if (!visited_f[j])
            {
                dfs(j, other, visited_f, cnt,mp_f,xx);
                final++;
            }
        }
    }
    cout<<final<<endl;
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
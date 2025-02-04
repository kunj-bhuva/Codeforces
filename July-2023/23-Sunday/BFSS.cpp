#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<list>
#include<unordered_map>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }

void prepareAdj(unordered_map<int,list<int>>& adjList,vector<pair<int,int>> edges)
{
    for(int i=0;i<edges.first;i++)
    {
        int u=edges[i].first;
        int v= edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void bfs(unordered_map<int,list<int>>& adjList,unordered_map<int,bool>& visited,vi& ans,int node)
{
    queue<int> q;
    q.push(node);
    visited[node]=1;

    while(!q.empty())
    {
        int front=q.front();
        q.pop();

        ans.push_back(front);

        for(auto i:adjList(front))
        {
            if(!visited[i])
            {
                q.push[i];
                visited[i]=1;
            }

        }
    }

}
vi BFS(int vertex, vector<pair<int,int>> edges)
{
    unordered_map<int,list<int>> adjList;
    vi ans;
    unordered_map<int,bool> visited;

    
    prepareAdj(adjList,edges);

    for(int i=0;i<vertex;i++)
    {
        if(!visited[i])
        {
            bfs(adjList,visited,ans,i);
        }
    }

}
int main()
{
    
    return 0;
}
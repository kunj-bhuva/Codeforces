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

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        vector<int> adj[n+2];
        vector<int> adj2[n+2];
        vector<pair<int,int>>pp;
        for(int i=0;i<m;i++)
        {
            int k,l;
            cin>>k>>l;
            pp.push_back({k,l});
            adj[k].pb(l);
            adj[l].pb(k);
        }
        unordered_map<int,int> single;
        for(int i=1;i<=n;i++)
        {
            if(adj[i].size()==1)single[i]++;
        }
        for(int i=0;i<m;i++)
        {
            int k=pp[i].first;
            int l=pp[i].second;
            if(single.find(k)==single.end()&&single.find(l)==single.end())
            {
                adj2[k].pb(l);
                adj2[l].pb(k);
            }

        }
        int count=0;
        for(auto i:adj2)
        {
            if(i.size()>0)count++;
        }
        int x=count-1;
        
        int po=(n-1)/x;
        int y=po-1;
        cout<<x<<" "<<y<<endl;
        // Your code logic goes here
    }
    return 0;
}
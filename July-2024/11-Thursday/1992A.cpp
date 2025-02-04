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

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    priority_queue<int,vector<int>,greater< int>>pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    int l=5;
    while(l--)
    {
        int k=pq.top();
        pq.pop();
        k++;
        pq.push(k);
    }
    int ans=1;
    while(!pq.empty())
    {
        int k=pq.top();
        pq.pop();
        ans*=k;
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
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vii;
typedef vector<int> vi;
typedef vector<long long> vll;
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
#define ip(a, n) for(int i = 0; i < n; i++) { long long xvyz; cin >> xvyz; a.push_back(xvyz);  }


void solve()
{
    long long n,k;
    cin>>n>>k;
    vii a;
    
    ip(a,n);

    vector<vll> adj(k);
    for (int i = 0; i < n; i++) {
        long p = a[i] % k;
        adj[p].push_back(a[i]);
    }
    
    int ot = 0;
    for (int it = 0; it < k; it++) 
    {
        long kk = 0;
        bool f = false;
        for (size_t i = 0; i < adj[it].size(); i++) 
        {
            if (!f) {
                kk = (adj[it][i] / k) % 2;
                f = true;
            } else {
                if ((adj[it][i] / k) % 2 != kk) {
                    ot = 1;
                    break;
                }
            }
        }
        if (ot == 1) break;
    }

    if(ot==1)
    {
        cout<<"-1"<<endl;
        return;
    }
  
    
    vector<long long>big(k,-1);


    long long bada=0;
    for(int i=0;i<n;i++)
    {
        int p=a[i]%k;
        big[p]=max(big[p],a[i]);
        bada=max(bada,a[i]);
    }

    vector<long long>newans;

    for(int i=0;i<big.size();i++)
    {
        if(big[i]!=(-1))newans.push_back(big[i]);
    }

    

    for(int i=0;i<newans.size();i++)
    {

        long long diff=bada-newans[i];
        diff/=k;
        if(diff%2==1)
        {
            newans[i]+=(diff+1)*k;
        }
        else{
            newans[i]+=diff*k;
        }
    }
    
    long long ss=INT_MIN,lll=INT_MAX;
    for(int i=0;i<newans.size();i++)
    {
        ss=max(ss,newans[i]);
        lll=min(lll,newans[i]+k);
    }
    if(ss<=lll&&ss!=0&&lll!=0)
    {
        cout<<ss<<endl;
        return;
    }


    cout<<"-1"<<endl;
    
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
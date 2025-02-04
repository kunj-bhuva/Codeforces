#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int main()
{
    int t;cin>>t;
    while(t--){
    ll n,k,m;
    cin>>n>>k>>m;
    ll d=n-k;
    if(d<=0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        ll kk=(m+1)*d;
        cout<<kk<<endl;
        
    }
    }
    return 0;
}
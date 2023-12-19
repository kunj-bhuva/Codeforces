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
    int n,m,k;
    cin>>n>>m>>k;
    vi a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    ll s=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.begin());
    if(k%2==1)
    {
        if(a[0]<b[m-1])
        a[0]=b[m-1];
        
    }
    else{
        if(a[0]>b[m-1])
        a[n-1]=b[0];
    }
    for(int i=0;i<n;i++)s+=a[i];
    cout<<s<<endl;
    }
    return 0;
}
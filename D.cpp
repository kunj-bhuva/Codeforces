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
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    if(k==1)
    {
        if(a[0]>=b[m-1])cout<<s<<endl;
        else cout<<(s-a[0]+b[m-1]);
    }
    else if(k==2)
    {
        if(a[0]<b[m-1])
        {
            s=s-a[0]+b[m-1];
            s+=b[0]-max(b[m-1],a[n-1]);

        }
        else s-=a[n-1]+b[0];
        cout<<s<<endl;

    }
    else{
        ll p=min(a[0],b[0]);
        ll po=max(a[n-1],b[m-1]);
        ll sum=0;
        if(a[0]<b[m-1])
        {
            s-=a[0]+b[m-1];
            sum=s;
            s+=min(a[0],b[0])-max(b[m-1],a[n-1]);
        }
        else
        s-=a[n-1]+b[0];
        k-=2;
        if(k%2==1)cout<<sum<<endl;
        else cout<<s<<endl;
    }
    }
    return 0;
}
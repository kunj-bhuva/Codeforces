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
    ll n,k;
    cin>>n>>k;
    vi a;
    ip(a);
    ll sum=0;
    ll s=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]*a[i];
        s+=a[i];
    }
    ll z=k-sum;

    ll root= 16 + 16*z;
    ll p=sqrt(root);
    ll answer=(p-4)/8;
    cout<<answer<<endl;
    }
    return 0;
}
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
    int n;
    cin>>n;
    vi a,b;
    int maax=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]<=10)
        {
            maax=max(maax,b[i]);
        }
    }
    cout<<maax<<endl;
    }
    return 0;
}
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
    int n,m,k,h;
    cin>>n>>m>>k>>h;
    vi a;
    ip(a);
    int max=(m-1)*k;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-h)>max)
        continue;
        else{
            int diff=abs(a[i]-h);
            if(diff/k==0)count++;
        }
    }
    cout<<count<<endl;
    }

    return 0;
}
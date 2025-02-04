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
    int a,b,c;
    cin>>a>>b>>c;
    int d=a+b;
    int e=b+c;
    int f=c+a;
    if(d>=10||e>=10||f>=10)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }
    return 0;
}
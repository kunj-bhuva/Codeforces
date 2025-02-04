#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
long long sum(int n) {
    return (n * (n - 1) * (2 * n - 1)) / 6;
}
int main()
{
    int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    ll a=sum(n-1);
    ll b=(n-1)*(n);
    a+=b;
    cout<<a<<endl;
    }
    return 0;
}
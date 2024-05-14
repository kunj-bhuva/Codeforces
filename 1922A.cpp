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
    string a,b,c;
    bool s=false;
    cin>>a>>b>>c;
    for(int i=0;i<n;i++)
    {
        if(a[i]==c[i]||b[i]==c[i])
        {
            cout<<"YES"<<endl;
            s=true;
            break;

        }
    }
    if(s==false)cout<<"NO"<<endl;
    }
    return 0;
}
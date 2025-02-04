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
    int n,m;
    cin>>n>>m;
    string comp="vika";
    int k=0;
    int flag=0;
    vector<vector<char>> s(n,vector<char>(m));
    for(int i=0;i<m;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if(s[j][i]==comp[k])
            {
                k++;
                break;
            }
        }
        if(k==4)
        {
            flag=1;
        }
    }
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
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
    vi x,y;
    int s1=0,s2=0;
    int f=0,g=0;
    for(int i=0;i<n;i++)
    {   
        int xvyz; cin>>xvyz;
        cin>>zz;
        x.push_back(xvyz); 
        s1+=xvyz;
        y.push_back(zz);
        s2+=zz;
        if(xvyz%2==0 &&zz%2!=0)f++;
        if(xvyz%2!=0 &&zz%2==0)f++;
        if(xvyz%2==0 &&zz%2==0)g++;
        if(xvyz%2!=0 &&zz%2!=0)g++;
     }
    if(s1%2==0&&s2%2==0)cout<<"0"<<endl;
    else
    {
        if(s1%2!=0&&s2%2==0&&f>0)cout<<"1";
        else if(s1%2!=0&&s2%2!=0&&g>0)cout<<"1";
        else cout<<"-1";
    }

    return 0;
}
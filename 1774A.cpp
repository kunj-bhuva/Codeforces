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
    string s;
    cin>>n;
    cin>>s;
    int sign=0;
    string ans="";
    if(s[0]=='1')
    {
         sign=1;
    }
    for(int i=0;i<n-1;i++)
    {
        if((s[i]=='0'||s[i]=='1')&&s[i+1]=='0')
        {
          ans+="+";
          
        }
        else if(s[i]==0&&s[i+1]=='1')
        {
             if(sign==1)
             {
                  sign=0;
                  ans+='-';
             }
             else
             {
                  sign=1;
                  ans+='+';
             }
        }
        else
        {
             if(sign==1)
             {
                  sign=0;
                  ans+='-';
             }
             else
             {
                  sign=1;
                  ans+='+';
             }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
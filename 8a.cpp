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
    string s;
    cin>>s;
    char c1,c2;
    cin>>c1;
    cin>>c2;
    int f=0;
    int b=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==c1)
        {
            for(int j=i+1;j<;j++)
            {
                if(s[j]==c2)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
    }for(int i=s.length();i>=0;i--)
    {
        if(s[i]==c2)
        {
            for(int j=i-1;j>0;j--)
            {
                if(s[j]==c1)
                {
                    b=1;
                    break;
                }
            }
            if(b==1)
            {
                break;
            }
        }
    }
    if(f==1&&b==1)cout<<"both";
    else if(f==1)cout<<"forword";
    else if(b==1)cout<<"backward";
    else cout<<"fantasy";
    return 0;
}
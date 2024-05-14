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
    while(t--)
    {
        int n;
        cin>>n;
        vi a,d;
        ip(a);
        ip(d);1918A.cpp
        
        while(n--)
        {
            for(int i=0;i<d.size();i++)
            {
                if(i==0&&(i+1)!=d.size())
                {
                    d[i]-=a[i+1];
                }
                else if(i==d.size()-1&& (i-1)!=-1)
                {
                    d[i]-=a[i-1];
                }
                else
                {
                    d[i]-=a[i+1]-a[i-1];
                }
                

            }
            int c=0;
            vector<int>new_a,new_d;
            for(int i=0;i<d.size();i++)
            {
                if(d[i]>=0)
                {
                    new_a.push_back(a[i]);
                    new_d.push_back(d[i]);
                }
                else
                {
                    c++;
                    
                }
                    
            }
            cout<<c<<" ";
            a=new_a;
            d=new_d;
        }
        cout<<endl;
    }
    return 0;
}
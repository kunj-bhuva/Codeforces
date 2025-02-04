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
    
        int n;
        cin>>n;
        vi a;
        ip(a);
        sort(a.begin(),a.end());
        int m=a[0];
        k=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]%m!=0)
            {
                k=false;
                break;
            }
        }
        if(k)
        cout<<m<<endl;
        else
        cout<<"-1"<<endl;
    
    return 0;
}
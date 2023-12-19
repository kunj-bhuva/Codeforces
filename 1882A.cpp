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
    cin>>n;
    vi a;
    ip(a);
    vi b;
    int m=0;
    if(a[0]!=1)
    {
        b.push_back(1);
        m=1;
    }
    else
    {
        b.push_back(2);
        m=2;
    }
    m++;
    for(int i=1;i<n;i++)
    {
        if(m==a[i])
            m++;
        
        m++;

    }
    cout<<m<<endl;
    }
    return 0;
}
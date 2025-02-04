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
    int n,x;
    cin>>n>>x;
    n%=6;
    int a[4];
    a[0]=0,a[1]=1,a[2]=2;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            swap(a[0],a[1]);
        else
            swap(a[1],a[2]);
    }
    cout<<a[x]<<endl;
    return 0;
}
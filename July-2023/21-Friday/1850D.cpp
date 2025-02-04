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
    int k;
    cin>>n>>k;
    vi a;
    ip(a);
    int count=0;
    int no=0;
    sort(a.begin(),a.end());
    for(no=0;no<n-1;no++)
    {
        if((a[no+1]-a[no])<=k&&a[no+1]!=0&&a[no]!=0)
        {
            count++;
        }
        else
        {
            a[no+1]=0;
        }


    }
    cout<<count<<endl;
    return 0;
}
}
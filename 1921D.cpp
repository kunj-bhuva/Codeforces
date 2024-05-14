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
    vector<int>a,b;
    ip(a);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int low=0,high=b.size()-1;
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-b[low])>abs(a[i]-b[high]))
        {
            ans+=abs(a[i]-b[low]);
            low++;
        }
        else{
            ans+=abs(a[i]-b[high]);
            high--;
        }
    }
    long long ans1=0;
    for(int i=N-1;i>=0;i--)
    {
        if(abs(a[i]-b[low])>abs(a[i]-b[high]))
        {
            ans1+=abs(a[i]-b[low]);
            low++;
        }
        else{
            ans1+=abs(a[i]-b[high]);
            high--;
        }
    }
    cout<<max(ans,ans1)<<endl;

    }
    return 0;
}
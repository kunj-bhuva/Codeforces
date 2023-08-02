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
    vi odd,even;
    vi a;
    vi order;
    for(int i=0;i<n;i++)
    {
        int xvyz; 
        cin>>xvyz; 
        a.push_back(xvyz); 
        if(xvyz%2==0)
        {
            even.push_back(xvyz);
            order[i]=1;
        }
        else 
        {
            order[i]=0;
            odd.push_back(xvyz);
        }
    }    
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    vi b=a;
    sort(b.begin(),b.end());
    int i=0,j=0;
    int k=0;
    vi ans;
    while(i<even.size()||j<odd.size())
    {
        if(order[k]%2==1)
        {
            ans.push_back(even[i])
            i++;
        }
        else{
            ans.push_back(odd[j]);
            j++;
        }
        k++;
    }
    if(ans==b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
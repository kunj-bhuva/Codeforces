#include <bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    
    long long t,n,k=0,b;
    cin>>t;
    while(t--)
    {
        int flag=1;
        cin>>n;
        vector<ll>a;
        for(ll i=0;i<n;i++)
        {
            cin>>b;
            a.push_back(b);
        }
        sort(a.begin(),a.end());
        ll k=a[0];
        ll z=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2!=k%2)
            flag=0;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(k%2!=0)
        {
            cout<<"YES"
            
            
        }
        else 
        cout<<"NO";
        
        
        
    }
    return 0;
}
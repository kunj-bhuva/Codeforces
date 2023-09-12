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
        vi a;
        cin>>n;
        ip(a);
        int f=0;
        int two=0,three=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>3)
            {
                cout<<"NO"<<endl;
                f=1;
                break;

            }
            if(a[i+1]-a[i]==3)three++;
            if(a[i+1]-a[i]==2)two++;
            
        }
        if(f==1)
        {
            continue;
        }
        if((three>=1&&two>=1)||two>=3||three>=2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int sog=0;
        if(two==2)
        {
            for(int i=0;i<n-2;i++)
            {
                if(a[i+2]-a[i+1]==2&&a[i+1]-a[i]==2)
                {
                    sog=1;
                    break;
                }
            }
        }
        if(sog==1)
        {
        cout<<"YES"<<endl;
             continue;
        }
        else
        {
             continue;
        cout<<"NO"<<endl;
          }

        cout<<"YES"<<endl;

    }
    return 0;
}
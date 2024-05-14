#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout<<endl;
#define ip(a,n)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int main()
{
    int t;cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vii a,b;
        ip(a,n);
        ip(b,m);
        long long  suma=0,sumb=0;
        long long mina=INT_MAX,minb=INT_MAX,maxa=INT_MIN,maxb=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxa=max(maxa,a[i]);
            mina=min(mina,a[i]);
            suma+=a[i];
        }
        for(int i=0;i<m;i++)
        {
            maxb=max(maxb,b[i]);
            minb=min(minb,b[i]);
            sumb+=b[i];
        }
        k%=2;
        if(k==1)
        {
            if(mina<maxb)
            {
                suma=suma-mina+maxb;
            }
        }
        else{
            if(minb<maxa)
            {
                suma=suma-mina+min(mina,minb);
            }
        }
        cout<<suma<<endl;
        
    }
    return 0;
}
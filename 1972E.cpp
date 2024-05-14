#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;



// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(long long  i = 0; i < n; i++) { long long xvyz; cin >> xvyz; a.push_back(xvyz); }

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        int kinj=12;
        long long n,k,q;
        cin>>n>>k>>q;
        vii dist,time;
        
        ip(dist,k);
        ip(time,k);
        vector<long double>v;
        long double cc=dist[0];
        long double ttt=time[0];
        // cout<<cc<<endl;
        v.push_back(cc/ttt);
        for(int i=0;i<k-1;i++)
        {
            long double d=dist[i+1]-dist[i];
            long double tt=time[i+1]-time[i];
            long double put=d/tt;
            v.push_back(put);

        }
        
        long  double req;
       for(long long i=0;i<q;i++)
       {
            
            long doub reach;
            cin>>reach;
            int ind=lower_bound(dist.begin(),dist.end(),reach)-dist.begin();
            cout<<ind<<endl;
            if(ind ==0)
            {   
                if(reach<dist[0])
                {
                    long double re=reach;
                    long double ree=v[0];
                    long double reee=re/ree;
                    req=reee;
                }
                else
                {
                    long long more=reach-dist[ind];
                    req=time[ind]+ more/v[ind];
                }

            }
            else
            {
                double long more=reach-dist[ind];
                double long op=v[ind];
                double long oo=more/op;
                req=time[ind]+ oo;
                
            }
            cout<<(int)req<<" ";
       }
       cout<<endl;
       
    }
    return 0;
}
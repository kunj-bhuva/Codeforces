#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << endl;
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << endl;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
#define loop(n)   for(int i=0;i<n;i++)

void solve(int freq,vi& b,int no)
{
    int k=freq;
    for(int i=1;i<=k;i++)
    {
        int z= no + (i%freq);
        b.push_back(z);
    }
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        bool glag=1;
        cin>>n;
        vi a;
        map <int,int> m;
        for(int i=0;i<n;i++)
        {
            int d;
            cin>>d;
            a.push_back(d);
            if (m.find(d) != m.end()) 
            {
                m[d]++;
            } 
            else 
            {
                m[d] = 1;
            }
        }
        for(auto i:m)
        {
            if(i.second==1)
            {
                cout<<"-1"<<endl;
                glag=0;
                break;
            }
        }
        if(glag==0)continue;
        int no=1;
        vi b;
        for(auto i:m)
        {
            solve(i.second,b,no);
            no+=i.second;
        }
        printv(b);
   
}
 return 0;
}
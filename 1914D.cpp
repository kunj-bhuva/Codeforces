#include<bits/stdc++.h>
#include<vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;

#define ip(a) for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        
    
        int n;
        cin >> n;

        vi a, b, c;
        ip(a); ip(b); ip(c);
        vector<pair<int,int>>ma,mb,mc;
        for(int i=0;i<n;i++)
        {
            ma.push_back(make_pair(a[i],i));
        }
        for(int i=0;i<n;i++)
        {
            mb.push_back(make_pair(b[i],i));
        }
        for(int i=0;i<n;i++)
        {
            mc.push_back(make_pair(c[i],i));
        }
        sort(ma.begin(),ma.end(),greater<>());
        sort(mb.begin(),mb.end(),greater<>());
        sort(mc.begin(),mc.end(),greater<>());
        int res=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if((ma[i].second!=mb[j].second)&&(mb[j].second!=mc[k].second)&&(mc[k].second!=ma[i].second))
                    {
                        res=max(ma[i].first+mb[j].first+mc[k].first,res);
                    }
                }
            }
        }
        cout<<res<<endl;

        


    }
    return 0;
}

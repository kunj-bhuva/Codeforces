#include <bits/stdc++.h>
using namespace std;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())


#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

int main() {
    int t; cin >> t;
    while(t--) {
        int n,m,x;
        cin>>n>>m>>x;
        int kunj=1;
        vector<pair<int,char>>info;
        for(int i=0;i<m;i++)
        {
            int d;
            char c;
            cin>>d>>c;
            info.push_back({d,c});
            
        }
        set<int>s;
        s.insert(x);
        for(int i=0;i<m;i++)
        {
            set<int>temp;
            auto it=info[i];
            int no=it.first;
            no=no%n;
            char d=it.second;
            if(d=='?')
            {
                for(auto i:s)
                {
                    if((no+i)%n==0)temp.insert(n);
                    else temp.insert((no+i)%n);
                    int ok=i-no;
                    if(ok<=0)
                    {
                        if((ok+n)==0)temp.insert(n);
                        else temp.insert(ok+n);
                    }
                    else{
                        if(ok==0)temp.insert(n);
                        else temp.insert(ok);
                    }
                }
            }
            else if(d=='0')
            {
                for(auto i:s)
                {
                    if((no+i)%n==0)temp.insert(n);
                    else temp.insert((no+i)%n);
                    
                }
            }
            else{
                for(auto i:s)
                {
                   int ok=i-no;
                    if(ok<=0)
                    {
                        temp.insert(ok+n);
                    }
                    else{
                        temp.insert(ok);
                    }
                }
            }
            s=temp;
        }
        vi ans;
        for(auto i:s)
        {
            ans.push_back(i);
        }
        sort(ans);
        cout<<ans.size()<<endl;
        printv(ans);

        
    }
    return 0;
}
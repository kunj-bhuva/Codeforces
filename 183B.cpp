#include<iostream>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#include<unordered_map>
#define printv(v)         for(auto i: v) cout << i << ' '; cout << \n
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << \n;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
unordered_map<int,int> make(vi a,int n)
{
    unordered_map <int,int> m;

    for(int i=0;i<n;i++)
    {
        if(m.find(a[i])==m.end())
        {
            m.insert({a[i],0});
        }
    }
    int k=0;
    int c=a[0];
    for(int i=0;i<=n;i++)
    {
        if(i<n)
        {
            if(c==a[i])
            {

                k++;
            }
            else
            {
                int d=a[i-1];
                if(m[d]!=0)
                {
                    m[d]=max(m[d],k);
                }
                else{
                    m[d]=k;
                }
                k=1;
                c=a[i];
            }
        }
        else
        {
            int d=a[i-1];
            if(m[d]!=0)
            {
                m[d]=max(m[d],k);
            }
            else
            {
                m[d]=k;
            }
            k=1;
        }
        
    }
    return m;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a;
        vi b;
        ip(a);
        ip(b);
        unordered_map<int,int> a1=make(a,n);
        unordered_map<int,int> b1=make(b,n);
        int maxx=0;
        for (const auto& pair : a1) 
        {

            int key = pair.first;
            int aValue = pair.second;

            if (b1.find(key) != b1.end()) 
            {
                int bValue = b1[key];
                maxx = std::max(maxx, aValue + bValue);
            }
            else 
            {
                maxx=max(maxx,aValue);
            }

        }
        // for (const auto& pair : b1) 
        // {

        //     int key = pair.first;
        //     int aValue = pair.second;

        //     if (b1.find(key) != a1.end()) 
        //     {
        //         int bValue = a1[key];
        //         maxx = std::max(maxx, aValue + bValue);
        //     }
        //     else 
        //     {
        //         maxx=max(maxx,aValue);
        //     }

        // }
        cout<<maxx<<endl;


    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)


int help(int i,string s,string s1,string s2,int which)
{
    if(which==1&&i==n&&s[i]==s1[n-1])return 1;

}
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        string ans="";
        int j=1;
        for(int i=0;i<n;i++)
        {
            
            if(s1[i+1]=='1'&&s2[i]=='0'){
                ans+=s1[i];
                j=i;
                break;
            }
            else{
                j=i;
                ans+=s1[i];
            }
            
            

        }
        
        ans+=s2.substr(j,n);
        cout<<ans<<endl;
        
        
    }
    return 0;
}
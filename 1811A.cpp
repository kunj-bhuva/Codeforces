#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t=0;
        int flag=0;
        int l,no;
        string s;
        cin>>l>>no;
        cin>>s;
        string res="";
        for(auto i:s)
        {
            if(i<no+48&&flag==0)
            {
                t=1;
                flag=1;
                char c='0'+no;
                res+=c;
            }
            else
            res+=i;
            
            if(t==1)
            {
                t=0;
                res+=i;
            }
            
            

        }
        cout<<res<<endl;
    }
      return 0;
}
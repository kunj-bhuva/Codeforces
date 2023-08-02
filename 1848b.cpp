#include<iostream>
#include<vector>
using namespace std;
vector<int> diff(vector<int>a,vector<int>b,int n)
{
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        int a1=a[i]-b[i];
        if(a1>=0)res[i]=a1;
        else res[i]=-1*a1;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        vector<int> a;
        vector<int> b,c;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int bb;
            cin>>bb;
            a.push_back(b);
        }
        for(int i=0;i<n;i++)
        {
            int bb;
            cin>>bb;
            b.push_back(b);
        }
        int c=100;
        while(c--)
        {
            vector<int> c=diff(a,b);
            a=b;
            b=c;
            vector<int> zero(n,0);
            if(zero==a)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        cout<"NO"<<endl;

    }
    return 0;
}
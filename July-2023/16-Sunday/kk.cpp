#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int sum1=0,sum2=0;
    int k=n/2;
    string s1=s.substr(0,n/2);
    string s2=s.substr(n/2);
    while(k--)
    {
      if(s1[k]!='4'&&s1[k]!='7')
      {
        cout<<"NO";
        return 0;
      }
      sum1+=s1[k]-'0';
    }
    k=n/2;
    while(k--)
    {
      if(s2[k]!='4'&&s2[k]!='7')
      {
        cout<<"NO";
        return 0;
      }
      sum2+=s2[k]-'0';
    }
    if(sum1==sum2)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;


}
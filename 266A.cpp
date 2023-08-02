#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;
    int n=s.size();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])c++;
    }
    cout<<c;
    return 0;
}
#include<iostream>
using namespace std;
void find(int a)
{
    int c=1;
    for(int i=1;i<=a;)
    {
        if(c%10!=3||c/3==0){
            c++;
            i++;
        }
    }
    cout<<c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        find(n);
    }
    return 0;
}
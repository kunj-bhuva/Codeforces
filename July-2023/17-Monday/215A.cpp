#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    int m;
    cin>>m;
    vector<int> b;
    for(int i=0;i<m;i++)
    {
        int bb;
        cin>>bb;
        b.push_back(bb);
    }
    
      return 0;
}
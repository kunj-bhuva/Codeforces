#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n-1;i++)
        {
            int b;
            cin>>b;
            a.push_back(b);
        }
        vector<int>ans(n,0);
        for(int i = 0; i < n - 1; i++)
        {
			if(max(ans[i], ans[i + 1]) != a[i])
            {
				if(i)
                {
					if(a[i] <= a[i - 1]) ans[i] = a[i];
					else ans[i + 1] = a[i];
				}
                else ans[i] = a[i];
			}
		}
        for(int i=1;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
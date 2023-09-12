#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        int m, k, a1, a2;
        cin >> m >> k >> a1 >> a2;

        if(a1>=m||(m%k<=a1&&m/k<=a2))
        {
            cout<<"0"<<endl;
        }
        else
        {
            int num2=min(m/k,a2);
            int num1=min(m-k*num2,a1);
            int rmd=m-num1-k*num2;
            if(rmd%k==0)
            {
                cout<<rmd/k<<endl;
            }
            else if((k-rmd%k)<=num1)
            cout<<rmd/k+1<<endl;
            else
            cout<<(rmd/k)+rmd%k<<endl;
        }
    }

    return 0;
}

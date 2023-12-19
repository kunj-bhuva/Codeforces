#include <iostream>
#include <vector>

using namespace std;

void findS(vector<int>& A, int n, int X, vector<int>& V) {
    int left = 0, right = 0;
    int cu= A[0];

    while (right<n) {
        if (cu == X) {
            V.push_back(right);
            right++;
            if (right < n) {
                cu+= A[right];
            }
        } 
        else if (cu< X) 
        {
            right++;
            if (right<n) 
            {
                cu+= A[right];
            }
        } 
        else 
        {
            cu-= A[left];
            left++;
        }
    }

    
}

int main() {
    int n, X,Y;
    cin >>n>>X>>Y;
    vector<int> A(n);
    vector<int> V;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int fp=0;

    findS(A, n, X, V);
    int sum=0;
    if (V.empty())cout<<"No";
    else
    {
        for(auto i:V)
        {
            int index=i+1;
            for(int j=index;j<n;j++)
            {
                sum+=A[j];
                if(sum==Y)
                {
                    fp=1;
                    break;

                }
                if(sum>Y)break;
            }
            if(fp==1)
            break;
        }
    }
    if(fp==1)cout<<"Yes";
    else cout<<"No";
    return 0;
}

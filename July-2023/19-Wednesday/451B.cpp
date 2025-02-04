#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n], arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr1[i] = arr[i];
    }
    if(n==1){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    int flag = 0;
    int temp, i,last;
    for (int i = 0; i < n - 1; i++)
    {
        temp = i;
        while (arr[i] > arr[i + 1])
        {
            i++;
            flag=1;
        }
        last=i;
        reverse(arr + temp, arr + i + 1);
        if (flag == 1)
        {
            break;
        }
    }
    sort(arr1, arr1 + n);
    
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != arr1[j])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << temp+1 << " " << last+1;
    return 0;
}
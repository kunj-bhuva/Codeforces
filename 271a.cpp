#include<iostream>
#include<unordered_map>
using namespace std;
bool areDigitsUnique(int number) {
    unordered_map<int, int> digitCount;

    while (number > 0) {
        int digit = number % 10;

        if (digitCount[digit] > 0) {
            return false;
        }

        digitCount[digit]++;
        number /= 10;
    }

    return true; 
}
int main()
{
    int n;
    cin>>n;
    bool found=true;
    n++;
    while(found)
    {
        bool nn=areDigitsUnique(n);
        if(nn==true)
        {
            cout<<n;
            return 0;
        }
        n++;
    }
    return 0;
}
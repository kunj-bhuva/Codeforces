#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int mod=1e9+7;
ll pre[200001]={0};

ll calculateDigitSum(ll number) {
    ll sum = 0;
    while(number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void processTestCases(){
    ll n;
    cin >> n;
    cout << pre[n] << endl;
}

int main(){
    for (int i = 1; i <= 200000; i++) {
        pre[i] = pre[i - 1] + calculateDigitSum(i);
    }
    ll tc;
    cin >> tc;
    while(tc--){
        processTestCases(); 
    }
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
	int n;
	cin >> n;
	int a = 0, b = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if (x % 2 == 0)
			a += 1;
		else
			b += 1;
	}
	if (b % 4 == 2)
		cout << "Bob" << endl;
	else if (b % 4 == 3)
		cout << "Alice" << endl;
	else if (b % 4 == 0)
		cout << "Alice" << endl;
	else if (a % 2 == 1)
		cout << "Alice" << endl;
	else
		cout << "Bob" << endl;
}
 
int main()
{
	int tests;
	cin >> tests;
	while (tests--) solve();
	return 0;
}
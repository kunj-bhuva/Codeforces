#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		vector<int> s(2);
		for(int j = 0; j < 2; j++)
			scanf("%d", &s[j]);
		vector<pair<int, int>> a(n);
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &a[j].first);
			a[j].second = j + 1;
		}
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		vector<vector<int>> lists(2);
		for(int j = 0; j < n; j++)
		{
			int cost1 = s[0] * (lists[0].size() + 1);
			int cost2 = s[1] * (lists[1].size() + 1);
			if(cost1 < cost2)
				lists[0].push_back(a[j].second);
			else
				lists[1].push_back(a[j].second);
		}
		for(int j = 0; j < 2; j++)
		{
		    cout << lists[j].size();
		    for(auto x : lists[j]) cout << " " << x;
		    cout << endl;
		}
	}
}
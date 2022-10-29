#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		int idx = n - 1;
		while (a[idx] >= a[idx + 1])
			idx--;
		if (idx == 0)
			for (int i = 1; i <= n; i++)
				cout << i << " ";
		else
		{
			int k = n;
			while (a[idx] >= a[k])
				k--;
			swap(a[idx], a[k]);
			int l = idx + 1, r = n;
			while (l < r)
			{
				swap(a[l], a[r]);
				l--;
				r++;
			}
			for(int i=1;i<=n;i++)
				cout<<a[i]<<" ";
		}
		cout << "\n";
	}
	return 0;
}
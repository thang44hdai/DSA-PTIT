#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
ll n, x;
ll a[50];
vector<ll> vt;
set<vector<ll>> ans;
void Try(int j = 1, ll sum = 0)
{
	if (sum > x)
		return;
	if (sum == x)
	{
		ans.insert(vt);
		return;
	}
	for (int i = j; i <= n; i++)
	{
		vt.push_back(a[i]);
		Try(i, sum + a[i]);
		vt.pop_back();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> x;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a+1, a+n+1);
		Try();
		for (auto i : ans)
		{
			cout << '[';
			for (int j = 0; j < i.size() - 1; j++)
				cout << i[j] << " ";
			cout << i[i.size() - 1] << ']';
		}
		if (ans.size() == 0)
			cout << -1;
		ans.clear();
		cout << "\n";
	}
	return 0;
}
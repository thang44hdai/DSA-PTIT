#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n, k;
int a[20];
void sinh()
{
	for (int i = 1; i <= k; i++)
		a[i] = i;
	while (1)
	{
		for (int j = 1; j <= k; j++)
			cout << a[j];
		int i = k;
		while (i > 0 and a[i] >= n - k + i)
			i--;
		if (i == 0)
			break;
		a[i]++;
		for (int j = i + 1; j <= k; j++)
			a[j] = a[i] + j - i;
		cout << " ";
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
		cin >> n >> k;
		sinh();
		cout << "\n";
	}
	return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
int a[50] = {};
bool check()
{
	int l = 1, r = n;
	while (a[l] == a[r])
		l++, r--;
	if (l < r)
		return false;
	return true;
}
void Sinh()
{
	while (1)
	{
		if (check() == true)
		{
			for (int i = 1; i <= n; i++)
				cout << a[i] << " ";
			cout << "\n";
		}
		int idx = n;
		while (a[idx] == 1 and idx > 0)
			idx--;
		if (idx == 0)
			return;
		a[idx] = 1;
		for (int i = idx + 1; i <= n; i++)
			a[i] = 0;
	}
}
int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	Sinh();
	return 0;
}
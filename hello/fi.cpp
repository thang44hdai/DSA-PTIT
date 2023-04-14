#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int x[1005];
int a[] = {-1, 2, 3, 5, 7};
int cnt[1005];
int idx;

void Try(int i)
{
	for (int j = 1; j <= 4; j++)
	{
		x[i] = a[j];
		cnt[x[i]]++;
		if (i == idx)
		{
			if (cnt[2] and cnt[3] and cnt[5] and cnt[7] > 0 and x[idx] != 2)
			{
				for (int k = 1; k <= idx; k++)
					cout << x[k];
				cout << "\n";
			}
		}
		else
			Try(i + 1);
		cnt[x[i]]--;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 4; i <= n; i++)
	{
		idx = i;
		Try(1);
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin >> t;
	int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while (t--)
	{
		int n;
		cin >> n;
		int x, y;
		int check = 0;
		for (int i = 0; i <= n / 4; i++)
		{
			for (int j = 0; j <= n / 7; j++)
			{
				if (4 * i + 7 * j > n)
					break;
				else if (4 * i + 7 * j == n)
				{
					check = 1;
					for (int k = 1; k <= i; k++)
						cout << "4";
					for (int k = 1; k <= j; k++)
						cout << "7";
				}
			}
			if (check)
				break;
		}

		if (!check)
			cout << -1;
		cout << endl;
	}
}

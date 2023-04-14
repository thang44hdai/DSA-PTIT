#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (i + j)
            {
                if (i == 0 and j)
                    a[i][j] += a[i][j - 1];
                else if (i and j == 0)
                    a[i][j] += a[i - 1][j];
                else
                    a[i][j] += max(a[i - 1][j], a[i][j - 1]);
            }
        }
    cout << a[n - 1][m - 1] << "\n";

    return 0;
}
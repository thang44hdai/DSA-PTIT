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
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        int dp[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                dp[i][j] = 1e9;
        dp[1][1] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i + 1 <= n)
                {
                    int x = abs(a[i + 1][j] - a[i][j]);
                    if (i + x <= n)
                        dp[i + x][j] = min(dp[i + x][j], dp[i][j] + 1);
                }
                if (j + 1 <= m)
                {
                    int y = abs(a[i][j + 1] - a[i][j]);
                    if (j + y <= m)
                        dp[i][j + y] = min(dp[i][j + y], dp[i][j] + 1);
                }
                if (i + 1 <= n and j + 1 <= m)
                {
                    int z = abs(a[i + 1][j + 1] - a[i][j]);
                    if (i + z <= n and j + z <= m)
                        dp[i + z][j + z] = min(dp[i + z][j + z], dp[i][j] + 1);
                }
            }
        }
        if (dp[n][m] < 1e9)
            cout << dp[n][m];
        else
            cout << -1;
        cout << "\n";
    }
    return 0;
}
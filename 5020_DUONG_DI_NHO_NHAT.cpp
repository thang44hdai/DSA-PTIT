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
        int a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        int dp[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                dp[i][j] = 1e9;
        dp[0][0] = a[0][0];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (i + j > 0)
                {
                    if (j - 1 >= 0)
                        dp[i][j] = min(dp[i][j], dp[i][j - 1] + a[i][j]);
                    if (i - 1 >= 0 and j - 1 >= 0)
                        dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + a[i][j]);
                    if (i - 1 >= 0)
                        dp[i][j] = min(dp[i][j], dp[i - 1][j] + a[i][j]);
                }
            }
        cout << dp[n - 1][m - 1] << "\n";
    }

    return 0;
}
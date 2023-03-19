#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll M = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b, c;
        cin >> a >> b >> c;
        int dp[n + 5][m + 5][k + 5] = {};
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                for (int x = 1; x <= k; x++)
                        if (a[i - 1] == b[j - 1] and a[i - 1] == c[x - 1])
                            dp[i][j][x] = dp[i - 1][j - 1][x - 1] + 1;
                        else
                            dp[i][j][x] = max({dp[i - 1][j][x], dp[i][j - 1][x], dp[i][j][x - 1]});
        cout << dp[n][m][k] << "\n";
    }

    return 0;
}
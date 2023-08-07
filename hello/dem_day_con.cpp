#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int M = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int &i : a)
            cin >> i;
        int cnt = 0;
        for (int k = 1; k <= n; k++)
        {
            int m = s * k;
            int dp[n + 1][k + 1][m + 1] = {};
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= k; j++)
                {
                    for (int l = 0; l <= m; l++)
                    {
                        if (i == 0 || j == 0 || l == 0)
                        {
                            dp[i][j][l] = 0;
                        }
                        else if (a[i - 1] <= l)
                        {
                            dp[i][j][l] = dp[i - 1][j][l] + dp[i - 1][j - 1][l - a[i - 1]];
                        }
                        else
                        {
                            dp[i][j][l] = dp[i - 1][j][l];
                        }
                    }
                }
            }
            cnt = (cnt + dp[n][k][m]) % M;
        }
        cout << cnt << "\n";
    }
    return 0;
}
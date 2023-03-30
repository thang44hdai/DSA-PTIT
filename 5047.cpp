#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[6][n + 5];
        for (int i = 1; i <= 4; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        ll dp[n + 6][n + 6] = {};
        ll ans = INT_MIN;
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dp[i][j] = a[i][j];
                for (int k = 1; k <= n; k++)
                {
                    if (j != k)
                        dp[i][j] = max(dp[i][j], dp[i - 1][k] + a[i][j]);
                }
                for (int k = 1; k < j - 1; k++)
                {
                    dp[i][j] = max(dp[i][j], dp[i][k] + a[i][j]);
                }
                ans = max(ans, dp[i][j]);
            }
        }
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << dp[i][j] << " ";
            cout << "\n";
        }
        cout << '\n';
        // cout << ans << "\n";
    }
    return 0;
}
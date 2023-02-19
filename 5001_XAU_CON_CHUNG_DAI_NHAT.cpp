#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int n = a.length(), m = b.length();
        int dp[n + 1][m + 1] = {};
        int ans = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                if (a[i - 1] == b[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                ans = max(ans, dp[i][j]);
            }
        cout << ans << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string n, m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int x = n.length(), y = m.length();
        int dp[x + 1][y + 1] = {};
        int ans = 0;
        for (int i = 1; i <= x; i++)
            for (int j = 1; j <= y; j++)
            {
                if (n[i - 1] == m[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                ans = max(ans, dp[i][j]);
            }
        cout << ans << "\n";
    }

    return 0;
}
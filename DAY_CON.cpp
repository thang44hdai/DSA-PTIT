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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int dp[n + 1][n + 1] = {};
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == s[j - 1] and i!=j)
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        cout << dp[n][n] << "\n";
    }
    return 0;
}
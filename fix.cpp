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
        string s;
        cin >> s;
        int n = s.length();
        bool dp[n + 1][n + 1] = {};
        // memset(dp, false, sizeof(dp));
        int ans = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
            for (int j = i; j < n; j++)
            {
                if (i == j)
                    dp[i][j] = true;
                else if (s[i] == s[j])
                {
                    if (j == i + 1)
                        dp[i][j] = true;
                    else
                        dp[i][j] = dp[i + 1][j - 1];
                }
                ans = max(ans, j - i + 1);
            }
        cout << ans << "\n";
    }
    return 0;
}
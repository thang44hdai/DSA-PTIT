#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int dp[101][10001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        ll dp[a + 1][b + 1];
        memset(dp, -1, sizeof(dp));
        dp[0][0] = 0;
        for (ll i = 0; i <= a; i++)
            for (ll j = 0; j <= b; j++)
                for (ll num = 1; num <= 9; num++)
                {
                    if (i >= num and j >= num * num and dp[i - num][j - num * num] != -1)
                    {
                        if (dp[i][j] == -1)
                            dp[i][j] = dp[i - num][j - num * num] * 10 + num;
                        else
                            dp[i][j] = min(dp[i][j], dp[i - num][j - num * num] * 10 + num);
                    }
                }
        cout << dp[a][b] << '\n';
    }
    return 0;
}
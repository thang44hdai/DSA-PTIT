#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll m = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll dp[n + 1][k + 1] = {};
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= k; j++)
                for (int x = 0; x <= min(j, 9); x++)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - x]) % m;
        cout << dp[n][k] << "\n";
    }

    return 0;
}
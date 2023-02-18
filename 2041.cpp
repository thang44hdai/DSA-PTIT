#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int dp[n + 1] = {};
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;
        for (int i = 4; i <= n; i++)
        {
            dp[i] = dp[i - 1] + 1;
            if (i % 2 == 0)
                dp[i] = min(dp[i], dp[i / 2]+1);
            if (i % 3 == 0)
                dp[i] = min(dp[i], dp[i / 3]+1);
        }
        cout << dp[n] << "\n";
    }
    return 0;
}

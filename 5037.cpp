#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int m = 1e9 + 7;
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
        int dp[n + 1][10] = {};
        for (int i = 0; i < 10; i++)
            dp[1][i] = 1;
        for (int i = 2; i <= n; i++)
            for (int j = 0; j <= 9; j++)
                for (int k = 0; k <= j; k++)
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % m;
        int sum = 0;
        for (int i = 0; i <= 9; i++)
            sum = (sum + dp[n][i]) % m;
        cout << sum << "\n";
    }
    return 0;
}
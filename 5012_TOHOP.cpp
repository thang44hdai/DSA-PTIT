#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n, k;
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
        cin >> n >> k;
        ll dp[n + 5][k + 5];

        for (int i = 0; i <= n; i++)
            for (int j =0 ; j <= min(i, k); j++)
                if (j == 0 or j == i)
                    dp[i][j] = 1;
                else if (j == 1 or j + 1 == i)
                    dp[i][j] = i;
                else
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % m;
        cout << dp[n][k] << "\n";
    }
    return 0;
}
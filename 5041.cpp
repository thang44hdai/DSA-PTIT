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
        string s;
        cin >> s;
        string a = s;
        reverse(a.begin(), a.end());
        int n = s.length();
        int dp[n + 1][n + 1] = {};
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == a[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        cout << n - dp[n][n] << "\n";
    }

    return 0;
}
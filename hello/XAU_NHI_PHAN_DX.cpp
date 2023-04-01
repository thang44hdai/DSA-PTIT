#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.length();
    int l, r;
    int t;
    cin >> t;
    int dp[n + 1][n + 1] = {};
    dp[0][0] = 1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            if (i == j)
                dp[i][j] = 1;
            else
            {
                if (s[i - 1] == s[j - 1])
                {
                    if (j - i == 1)
                        dp[i][j] = 1;
                    else
                        dp[i][j] = dp[i + 1][j - 1];
                }
            }
        }
    }
    while (t--)
    {
        cin >> l >> r;
        if (dp[l][r])
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
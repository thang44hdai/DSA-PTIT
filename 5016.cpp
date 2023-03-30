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
        ll dp[n + 1];
        dp[1] = 1;
        int a = 1, b = 1, c = 1;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = min({dp[a] * 2, dp[b] * 3, dp[c] * 5});
            if (dp[i] == dp[a] * 2)
                a++;
            if (dp[i] == dp[b] * 3)
                b++;
            if (dp[i] == dp[c] * 5)
                c++;
        }
        cout << dp[n] << '\n';
    }
    return 0;
}
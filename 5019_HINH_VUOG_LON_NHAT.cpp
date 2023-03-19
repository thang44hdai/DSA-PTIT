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
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int dp[n + 50] = {};
        dp[1] = x;
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
                dp[i] = min(dp[i - 1] + x, dp[i / 2] + z); // chẵn thì insert hoặc copying
            else
                dp[i] = min({dp[i - 1] + x, dp[(i + 1) / 2] + z + y, dp[(i - 1) / 2] + z + x}); // lẻ thì insert hoặc copying-> insert hoặc copying->delete
        }
        cout << dp[n] << "\n";
    }

    return 0;
}
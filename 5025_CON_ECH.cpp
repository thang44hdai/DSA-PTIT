#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll dp[n + 5] = {};
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        for (int i = 4; i <= n + 1; i++)
            dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
        cout << dp[n + 1] << "\n";
    }
    return 0;
}
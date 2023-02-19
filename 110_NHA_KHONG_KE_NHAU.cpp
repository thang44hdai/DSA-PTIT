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
        ll a[n];
        ll dp[n] = {};
        for (auto &i : a)
            cin >> i;
        dp[0] = a[0];
        dp[1] = max(a[0], a[1]);
        ll Max = 0;
        for (int i = 2; i < n; i++)
        {
            dp[i] = max({dp[i], dp[i - 2] + a[i], dp[i - 1]});
            Max = max(Max, dp[i]);
        }
        cout << dp[n - 1] << "\n";
    }

    return 0;
}
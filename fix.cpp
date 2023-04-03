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
        pair<ll, ll> p[n];
        for (auto &i : p)
            cin >> i.first >> i.second;
        ll dp[n + 1][2] = {};
        dp[0][1] = p[0].second;
        for (int i = 1; i < n; i++)
        {
            if (p[i].first == p[i - 1].first)
            {
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + p[i].second;
                dp[i][0] = dp[i - 1][1];
            }
            else
            {
                dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]);
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + p[i].second;
            }
        }
        cout << min(dp[n - 1][0], dp[n - 1][1]) << "\n";
        
    }
    return 0;
}
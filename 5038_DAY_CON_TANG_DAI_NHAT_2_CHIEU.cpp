#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    pair<int, int> p[n];
    for (auto &i : p)
        cin >> i.first >> i.second;
    int dp[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (p[j].first < p[i].first and p[j].second < p[i].second)
                dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}
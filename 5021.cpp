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
        pair<int, int> a[n];
        for (auto &i : a)
            cin >> i.first >> i.second;
        sort(a, a+n);
        int dp[n + 1] = {};
        int Max = 0;
        for (int i = 0; i < n; i++)
        {
            dp[i] = 1;
            for (int j = 0; j < i; j++)
                if (a[j].second < a[i].first)
                    dp[i] = max(dp[i], dp[j] + 1);
            Max = max(Max, dp[i]);
        }
        cout << Max << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> v;
        int a[n], c[n];
        for (auto &i : a)
            cin >> i;
        for (auto &i : c)
            cin >> i;
        int dp[v + 5] = {};
        for (int i = 0; i < n; i++)
            for (int j = v; j >= a[i]; j--)
                dp[j] = max(dp[j], dp[j - a[i]] + c[i]);
        cout << dp[v] << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll M = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll a[n];
        for (ll &i : a)
            cin >> i;
        ll dp[k + 5] = {};
        dp[0] = 1;
        for (ll i = 1; i <= k; i++)
            for (ll j = 0; j < n; j++)
                if (i >= a[j])
                    dp[i] = (dp[i] + dp[i - a[j]]) % M;
        cout << dp[k] << "\n";
    }

    return 0;
}
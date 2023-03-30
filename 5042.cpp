#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string ans(ll dp[], int n, ll k)
{
    if (binary_search(dp, dp + n, k))
        return "YES";
    for (int i = 0; i < n; i++)
    {
        if (binary_search(dp + i + 1, dp + n, dp[i] + k))
            return "YES";
    }
    return "NO";
}
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
        ll k;
        cin >> n >> k;
        ll a[n], dp[n];
        for (ll &i : a)
            cin >> i;
        dp[0] = a[0];
        for (int i = 1; i < n; i++)
            dp[i] = dp[i - 1] + a[i];
        cout << ans(dp, n, k) << "\n";
    }

    return 0;
}
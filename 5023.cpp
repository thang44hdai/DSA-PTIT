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
        string s;
        cin >> s;
        int n = s.length();
        ll dp[n + 5] = {};
        ll ans = 0;
        for (int len = 1; len <= n; len++)
        {
            for (int i = 0; i <= n - len; i++)
            {
                string str = s.substr(i, len);
                dp[len] += stoll(str);
            }
            ans += dp[len];
        }
        cout << ans << "\n";
    }
    return 0;
}
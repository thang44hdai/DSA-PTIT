#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

string s;
int n;
void sol()
{
    s = " " + s;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '0')
        {
            if (i == 1 || (s[i - 1] != '1' && s[i - 1] != '2'))
            {
                cout << 0 << "\n";
                return;
            }
            dp[i] = dp[i - 2];
        }
        else
        {
            dp[i] = dp[i - 1];
            if (i >= 2 and (s[i - 1] == '1' or (s[i - 1] == '2' and s[i] <= '6')))
                dp[i] += dp[i - 2];
        }
    }
    cout << dp[n] << "\n";
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
        cin >> s;
        n = s.length();
        sol();
    }
    return 0;
}
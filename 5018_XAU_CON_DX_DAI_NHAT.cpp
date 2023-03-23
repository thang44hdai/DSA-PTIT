#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n = a.length();
        a = " " + a;
        bool dp[n + 1][n + 1]; // true nếu đối xứng từ i-> j và ngược lại
        memset(dp, false, sizeof(dp));
        for (int i = 1; i <= n; i++)
            dp[i][i] = true;
        int Max = 1;
        for (int len = 2; len <= n; len++)
        {
            for (int i = 1; i <= n - len + 1; i++)
            {
                int j = i + len - 1;
                if (a[i] == a[j])
                    if (len == 2)
                        dp[i][j] = true;
                    else
                        dp[i][j] = dp[i + 1][j - 1];

                if (dp[i][j])
                    Max = max(Max, len);
            }
        }
        cout << Max << "\n";
    }
    return 0;
}
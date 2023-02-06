#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n, k;
ll m = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int dp[n + 1] = {}; // số bước để bước tới bậc thang thứ i
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
            if (i >= k)
                for (int j = i - 1; j >= i - k; j--)
                    dp[i] = (dp[i] + dp[j]) % m;
            else
                for (int j = 0; j <= i - 1; j++)
                    dp[i] = (dp[i] + dp[j]) % m;
        cout << dp[n] << "\n";
    }

    return 0;
}
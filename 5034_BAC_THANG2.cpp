#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

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
        ll dp[n + 5] ={};
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
            if (i > k)
                for (int j = i - 1; j >= i - k; j--)
                    dp[i] = (dp[i] + dp[j]) % m;
            else
                for (int j = 0; j < i; j++)
                    dp[i] = (dp[i] + dp[j]) % m;
        cout << dp[n] << "\n";
    }
    return 0;
}
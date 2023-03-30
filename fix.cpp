#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int dp[n + 1][k + 1] = {};
       dp[0][0]=1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                for (int num = 0; num <= 9; num++)
                {
                    if (j >= num)
                        dp[i][j] += dp[i - 1][j - num];
                }
            }
        }
        cout << dp[1][2] << "\n";
    }
}
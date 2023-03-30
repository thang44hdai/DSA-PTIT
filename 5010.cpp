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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] %= k;
        }
        int dp[1001][1001];// độ dài dãy con lớn tính tới i và có số dư là j
        // k bieest sao nm để dp[n+1][k] lại sai :>
        dp[0][0] = 0;
        for (int i = 1; i <= n; i++)
            dp[0][i] = -1e9;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < k; j++)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j + k - a[i]) % k] + 1);
                // trường hợp 1 là chọn a[i] để cộng, trường hợp 2 là không chọn a[i]
        }
        cout << dp[n][0] << endl;
    }
}
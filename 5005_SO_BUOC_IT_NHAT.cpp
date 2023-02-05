#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], vt[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dp[n + 1] = {}; // dãy con tăng dài nhất tính đến vị trí thứ i
        fill(dp, dp + n + 1, 1);
        int Max = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
                if (a[j] <= a[i])
                    dp[i] = max(dp[i], dp[j] + 1);
            Max = max(Max, dp[i]);
        }
        cout << n - Max << "\n";
    }
    return 0;
}
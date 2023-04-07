#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int sol(int a[], int n, int k)
{
    int ans = 1e9;
    int dp[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j)
                dp[i][j] = i;
            else
                dp[i][j] = __gcd(dp[i][j - 1], a[j]);
            if (dp[i][j] == k)
                return j - i + 1;
        }
    }
    return -1;
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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &i : a)
            cin >> i;
        cout << sol(a, n, k) << "\n";
    }
    return 0;
}
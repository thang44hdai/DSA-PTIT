#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n, s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        int a[n];
        int dp[s + 5] = {}; // dp[i]=1 khi tồn tại tổng bằng i
        for (auto &i : a)
        {
            cin >> i;
            dp[i] = 1;
        }
        for (int i = 0; i < n; i++)
            for (int j = s; j >= a[i]; j--)
                dp[j] = max(dp[j], dp[j - a[i]]);
        if (dp[s])
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
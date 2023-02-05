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
    cin >> s >> n;
    int a[n];
    int dp[s + 5] = {};
    dp[0] = 1;
    for (auto &i : a)
        cin >> i;
    int Max = 0;
    for (int i = 0; i < n; i++)
        for (int j = s; j >= a[i]; j--)
            if (dp[j - a[i]] == 1)
            {
                Max = max(Max, j);
                dp[j] = 1;
            }
    cout << Max;

    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n, m;
int cnt;
void Try(int i = 0, int j = 0)
{
    if (i == n - 1 and j == m - 1)
    {
        cnt++;
        return;
    }
    if (i + 1 <= n - 1)
        Try(i + 1, j);
    if (j + 1 <= m - 1)
        Try(i, j + 1);
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
        cnt = 0;
        cin >> n >> m;
        int a[n][m] = {};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        Try();
        cout << cnt << "\n";
    }
    return 0;
}
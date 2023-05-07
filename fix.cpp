#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    int d[n + 5][n + 5];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                d[i][j] = 0;
            else
                d[i][j] = 1e9;
        }
    while (m--)
    {
        int x, y, w;
        cin >> x >> y >> w;
        d[x][y] = w;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                d[i][j] = min(d[i][j], max(d[i][k], d[k][j]));
        }
    }
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        if (d[u][v] == 1e9)
            cout << -1;
        else
            cout << d[u][v];
        cout << "\n";
    }
}
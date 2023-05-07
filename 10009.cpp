#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int ok[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i != j)
                ok[i][j] = 1e9;
            else
                ok[i][j] = 0;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        ok[u][v] = ok[v][u] = min(ok[u][v], w);
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (ok[i][j] > ok[i][k] + ok[k][j])
                    ok[i][j] = ok[i][k] + ok[k][j];
    int t;
    cin >> t;
    while (t--)
    {
        int u, v;
        cin >> u >> v;
        cout << ok[u][v] << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int a[n + 1][n + 1];
//     for (int i = 1; i = n; i++)
//         for (int j = 1; j <= n; j++)
//             if (i != j)
//                 a[i][j] = 1e9;
//             else
//                 a[i][j] = 0;
//     while (m--)
//     {
//         int x, y, z;
//         cin >> x >> y >> z;
//         a[x][y] = a[y][x] = min(a[x][y], z);
//     }
//     for (int k = 1; k <= n; k++)
//         for (int i = 1; i <= n; i++)
//             for (int j = 1; j <= n; j++)
//                 a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int s, t;
//         cin >> s >> t;
//         cout << a[s][t] << endl;
//     }
// }
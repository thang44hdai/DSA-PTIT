#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e, u;
ll d[1005];
int a[1005][1005];
int vs[1005];
void dijkstra()
{
    for (int i = 1; i <= v; i++)
        d[i] = a[u][i];
    d[u] = 0, vs[u] = 1;
    while (1)
    {
        u = 0;
        int Min = 1e9;
        for (int i = 1; i <= v; i++)
            if (!vs[i] and d[i] < Min)
            {
                u = i;
                Min = d[i];
            }
        if (u == 0)
            break;
        vs[u] = 1;
        for (int i = 1; i <= v; i++)
            if (vs[i] == 0 and d[i] > d[u] + a[u][i])
                d[i] = d[u] + a[u][i];
    }
    for (int i = 1; i <= v; i++)
        cout << d[i] << " ";
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> u;
        for (int i = 1; i <= v; i++)
            for (int j = 1; j <= v; j++)
                a[i][j] = 1e9;
        while (e--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            a[x][y] = min(a[x][y], z);
            a[y][x] = a[x][y];
        }
        fill(vs, vs + v + 5, 0);
        dijkstra();
    }

    return 0;
}
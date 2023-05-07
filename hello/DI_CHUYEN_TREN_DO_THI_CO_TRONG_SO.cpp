#include "bits/stdc++.h"
using namespace std;
#define ll long long;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
const int MAX = 3e2 + 5;
const int BLOCK = 350;
const int MAX_VAL = 1e6 + 2;
const int LINF = 1e18 + 5;
int n, m, q;
int d[MAX][MAX];

void run_case()
{
    cin >> n >> m >> q;
    FOR(i, 1, n)
    FOR(j, 1, n)
    {
        if (i == j)
            d[i][j] = d[j][i] = 0;
        else
            d[i][j] = d[j][i] = LINF;
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = w;
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
        int qry = d[u][v];
        if (qry == LINF)
            qry = -1;
        cout << qry << "\n";
    }
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    run_case();
}
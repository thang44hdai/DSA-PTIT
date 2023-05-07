#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n, m, u;
int a[2005][2005];
int ok[2005];
int e[2005];
vector<pair<int, int>> vt;
vector<int> ke[2005];
void dfs(int u)
{
    ok[u] = 1;
    for (auto i: ke[u])
        if (!ok[i])
        {
            e[i] = u;
            vt.push_back({e[i], i});
            dfs(i);
        }
}
void treeDfs(int x)
{
    vt.clear();
    fill(ok, ok + n + 5, 0);
    dfs(x);
    int cnt = 0;
    for (int v = 1; v <= n; v++)
        if (ok[v] == 1)
            cnt++;
    if (cnt == n)
    {
        for (auto i : vt)
            cout << i.first << " " << i.second << "\n";
    }
    else
        cout << -1 << "\n";
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
        cin >> n >> m >> u;
        for (int i = 1; i <= n; i++)
        {
            ok[i] = e[i] = 0;
            for (int j = 1; j <= n; j++)
                a[i][j] = 0;
        }
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        treeDfs(u);
        for(int i=1;i<=n;i++)
            ke[i].clear();
    }
    return 0;
}
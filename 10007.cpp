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
void bfs()
{
    queue<int> q;
    q.push(u);
    ok[u] = 1;
    while (q.size())
    {
        int top = q.front();
        q.pop();
        for (int i : ke[top])
        {
            if (!ok[i])
            {
                ok[i] = 1;
                q.push(i);
                e[i] = top;
                vt.push_back({top, i});
            }
        }
    }
}
void treeBfs()
{
    vt.clear();
    int cnt = 0;
    bfs();
    for (int i = 1; i <= n; i++)
        if (ok[i])
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
        treeBfs();
        for (int i = 1; i <= n; i++)
            ke[i].clear();
    }
    return 0;
}
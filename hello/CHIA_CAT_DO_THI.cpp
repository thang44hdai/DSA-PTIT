#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n, m;
vector<int> ke[1000001];
int vs[1000001];
void init()
{
    fill(vs, vs + n + 5, 0);
    for (int i = 1; i <= n; i++)
        ke[i].clear();
}
void DFS(int u)
{
    vs[u] = 1;
    for (auto x : ke[u])
    {
        if (!vs[x])
            DFS(x);
    }
}
int dem()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (!vs[i])
        {
            cnt++;
            DFS(i);
        }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        init();
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int tplt = dem();
        int ans = 0;
        int ok = 0;
        for (int i = 1; i <= n; i++)
        {
            fill(vs, vs + n + 5, 0);
            vs[i] = 1;
            int cnt = dem();
            if (cnt > tplt)
            {
                ok = 1;
                ans = i;
            }
        }
        if (ok)
            cout << ans << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}
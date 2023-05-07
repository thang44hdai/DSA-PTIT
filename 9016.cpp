#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e;
vector<int> ke[1005];
int ok[1005];
int color[1005];
int par[1005];
bool dfs(int u)
{
    color[u] = 1;
    for (int i : ke[u])
    {
        if (color[i] == 0)
        {
            par[i] = u;
            if (dfs(i))
                return true;
        }
        else
        {
            if (color[i] == 1)
                return true;
        }
    }
    color[u] = 2;
    return false;
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
        cin >> v >> e;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        fill(ok, ok + v + 5, 0);
        fill(color, color + v + 5, 0);
        bool check = false;
        for (int i = 1; i <= v; i++)
            if (!ok[i])
            {
                if (dfs(i))
                {
                    check = true;
                    break;
                }
            }
        if (check)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
        for (int i = 1; i <= v; i++)
            ke[i].clear();
    }
    return 0;
}

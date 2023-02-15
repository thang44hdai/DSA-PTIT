#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e, u;
vector<int> vt[1005];
int ok[1005];
void init()
{
    for (int i = 0; i <= v; i++)
        vt[i].clear();
    fill(ok, ok + 1005, 0);
}
void dfs(int x)
{
    ok[x] = 1;
    cout << x << " ";
    for (auto i : vt[x])
        if (!ok[i])
            dfs(i);
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
        cin >> v >> e >> u;
        init();
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
        }
        dfs(u);
        cout << "\n";
    }
    return 0;
}

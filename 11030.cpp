#include <bits/stdc++.h>
using namespace std;
int ok[100005];
vector<int> ke[100005];
int ans;
int check = 0;
void dfs(int u, int v, int dem)
{
    if (check)
        return;
    ok[u] = 1;
    for (int i : ke[u])
        if (!ok[i])
        {
            if (i == v)
            {
                ans = dem + 1;
                check = 1;
                ok[i] = 1;
                return;
            }
            else
                dfs(i, v, dem + 1);
        }
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
        int n;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            check = 0;
            fill(ok, ok + n + 5, 0);
            dfs(x, y, 0);
            cout << ans << "\n";
        }
        for (int i = 1; i <= n; i++)
            ke[i].clear();
    }
    return 0;
}
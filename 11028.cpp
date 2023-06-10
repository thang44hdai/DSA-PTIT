#include <bits/stdc++.h>
using namespace std;
int ok[100005];
vector<int> ke[100005];
int ans = 0;
void dfs(int u, int dem)
{

    ok[u] = 1;
    for (auto i : ke[u])
        if (!ok[i])
        {
            ans = max(ans, dem);
            dfs(i, dem + 1);
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
        ans = -1;
        fill(ok, ok + n + 5, 0);
        dfs(1, 1);
        cout << ans << "\n";
        for (int i = 1; i <= n; i++)
            ke[i].clear();
    }
    return 0;
}
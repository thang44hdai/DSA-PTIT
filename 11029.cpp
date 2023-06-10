#include <bits/stdc++.h>
using namespace std;
int ok[1005];
vector<int> ke[1005];
vector<vector<int>> ans;
vector<int> vt;
void dfs(int u)
{
    vt.push_back(u);
    ok[u] = 1;
    int check = 0;
    for (auto i : ke[u])
        if (!ok[i])
        {
            check = 1;
            dfs(i);
        }
    if (!check)
        ans.push_back(vt);
    vt.pop_back();
}
bool cmp(vector<int> a, vector<int> b)
{
    return a[a.size() - 1] < b[b.size() - 1];
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
        dfs(1);
        sort(ans.begin(), ans.end(), cmp);
        for (auto i : ans)
        {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }
        ans.clear();
        vt.clear();
        fill(ok, ok + n + 1, 0);
        for (int i = 1; i <= n; i++)
            ke[i].clear();
    }
    return 0;
}
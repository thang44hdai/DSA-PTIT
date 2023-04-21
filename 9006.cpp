#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e;
vector<int> vt[1005];
int ok[1005];
int go[1005];
int s, t;
void dfs(int u)
{
    for (auto i : vt[u])
        if (!ok[i])
        {
            ok[i] = 1;
            go[i] = u;
            if (i == t)
                return;
            dfs(i);
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        cin >> v >> e >> s >> t;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        ok[s] = 1;
        dfs(s);
        if (!ok[t])
            cout << -1;
        else
        {
            vector<int> ans;
            while (t != s)
            {
                ans.push_back(t);
                t = go[t];
            }
            ans.push_back(s);
            reverse(ans.begin(), ans.end());
            for (auto i : ans)
                cout << i << " ";
        }
        cout << "\n";
        fill(ok, ok + v + 5, 0);
        for (int i = 1; i <= v; i++)
            vt[i].clear();
    }

    return 0;
}
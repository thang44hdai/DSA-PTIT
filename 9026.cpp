#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e, s, t;
vector<int> vt[1005];
int go[1005];
int ok[1005];

void init()
{
    fill(ok, ok + 1005, 0);
    for (int i = 0; i <= v; i++)
        vt[i].clear();
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    ok[u] = 1;
    while (q.size())
    {
        int top = q.front();
        ok[top] = 1;
        q.pop();
        for (auto i : vt[top])
        {
            if (!ok[i])
            {
                ok[i] = 1;
                q.push(i);
                go[i] = top;
                if (i == t)
                    return;
            }
        }
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
        init();
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
        }

        bfs(s);
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
            for (int i = ans.size() - 1; i >= 0; i--)
                cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e;
vector<int> ke[1005];
int ok[1005];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    ok[u] = 1;
    while (q.size())
    {
        int top = q.front();
        q.pop();
        for (auto i : ke[top])
        {
            if (!ok[i])
            {
                ok[i] = 1;
                q.push(i);
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
        vector<int> ans;
        cin >> v >> e;
        fill(ok, ok + v + 5, 0);
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int cnt = 0;
        for (int i = 1; i <= v; i++)
            if (!ok[i])
            {
                cnt++;
                bfs(i);
            }
        for (int i = 1; i <= v; i++)
        {
            fill(ok, ok + v + 5, 0);
            ok[i] = 1;
            int dem = 0;
            for (int j = 1; j <= v; j++)
                if (!ok[j])
                {
                    dem++;
                    bfs(j);
                }
            if (dem > cnt)
                ans.push_back(i);
        }
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
        for (int i = 1; i <= v; i++)
            ke[i].clear();
    }

    return 0;
}
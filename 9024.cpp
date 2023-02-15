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
void bfs()
{
    queue<int> q;
    q.push(u);
    ok[u] = 1;
    while (q.size())
    {
        int top = q.front();
        cout << top << " ";
        q.pop();
        for (auto i : vt[top])
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
        bfs();
        cout << "\n";
    }
    return 0;
}

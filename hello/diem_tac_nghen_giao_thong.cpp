#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

vector<int> ke[1005];
int ok[1005];
int n, m, x, y;
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    ok[u] = 1;
    while (q.size())
    {
        int top = q.front();
        q.pop();
        for (int i : ke[top])
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
        cin >> n >> m >> x >> y;
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            ke[a].push_back(b);
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            fill(ok, ok + n + 5, 0);
            ok[i] = 1;
            bfs(x);
            if (!ok[y])
                cnt++;
        }
        cout << cnt << "\n";
        for (int i = 1; i <= n; i++)
            ke[i].clear();
    }
    return 0;
}
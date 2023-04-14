#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m, s;
vector<int> ke[1005];
int go[1005];
int ok[1005];

void bfs(int u, int v)
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
            if (ok[i] == 0)
            {
                q.push(i);
                go[i] = top;
                ok[i] = 1;
                if (i == v)
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
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> s;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
            if (i != s)
            {
                fill(ok, ok + n + 5, 0);
                int j = i;
                bfs(s, j);
                if (ok[j] == 0)
                    cout << "No path"
                         << "\n";
                else
                {
                    vector<int> vt;
                    while (j != s)
                    {
                        vt.push_back(j);
                        j = go[j];
                    }
                    vt.push_back(s);
                    reverse(vt.begin(), vt.end());
                    for (auto x : vt)
                        cout << x << " ";
                    cout << "\n";
                }
            }
        for (int i = 1; i <= n; i++)
            ke[i].clear();
    }
    return 0;
}
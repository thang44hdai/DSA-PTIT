#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;
int a[505][505];
int y[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int x[] = {0, -1, -1, -1, 0, 1, 1, 1};
void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    while (q.size())
    {
        pair<int, int> top = q.front();
        a[top.first][top.second] = 0;
        q.pop();
        for (int idx = 0; idx < 8; idx++)
        {
            int dx = top.first + x[idx];
            int dy = top.second + y[idx];
            if (dx >= 1 and dx <= n and dy >= 1 and dy <= m and a[dx][dy] == 1)
            {
                a[dx][dy] = 0;
                q.push({dx, dy});
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
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] == 1)
                {
                    cnt++;
                    bfs(i, j);
                }
            }
        cout << cnt << "\n";
    }
    return 0;
}
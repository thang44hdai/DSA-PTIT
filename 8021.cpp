#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int m, n;
int a[1005][1005];
int cnt[1005][1005] = {};
void init()
{
    memset(cnt, 9999, sizeof(cnt));
}
void bfs()
{
    queue<pair<int, int>> q;
    q.push({1, 1});
    cnt[1][1] = 0;
    while (q.size())
    {
        auto top = q.front();
        q.pop();
        int x = top.first, y = top.second;
        int dx = x + a[x][y];
        int dy = y + a[x][y];
        if (dx <= m and a[dx][y])
        {
            q.push({dx, y});
            cnt[dx][y] = min(cnt[dx][y], cnt[x][y] + 1);
        }
        if (dy <= n and a[x][dy])
        {
            q.push({x, dy});
            cnt[x][dy] = min(cnt[x][dy], cnt[x][y] + 1);
        }
        a[x][y] = 0;
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
        init();
        cin >> m >> n;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        bfs();
        if (a[m][n])
            cout << -1;
        else
            cout << cnt[m][n];
        cout << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int c[1005][1005] = {};

int xuly(int n, int m)
{
    memset(c, 9999, sizeof(c));
    int i, j;
    queue<pair<int, int>> q;
    q.push({1, 1});
    c[1][1] = 0;
    while (!q.empty())
    {
        auto t = q.front();
        i = t.first;
        j = t.second;
        int x = a[i][j];
        q.pop();
        if (j + x <= m and a[i][j + x])
        {
            q.push({i, j + x});
            c[i][j + x] = min(c[i][j + x], c[i][j] + 1);
        }
        if (i + x <= n and a[i + x][j])
        {
            q.push({i + x, j});
            c[i + x][j] = min(c[i + x][j], c[i][j] + 1);
        }
        a[i][j] = 0;
    }
    if (a[n][m] == 0)
        return c[n][m];
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << xuly(n, m) << "\n";
    }
}
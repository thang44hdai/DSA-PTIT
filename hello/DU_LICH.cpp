#include <bits/stdc++.h>
#define ll long long
using namespace std;
int v, e, s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> v >> e >> s;
    int f[s + 2];
    for (int i = 1; i <= s; i++)
        cin >> f[i];
    f[0] = f[s + 1] = 1;
    ll d[1005][1005];
    for (int i = 1; i <= v; i++)
        for (int j = 1; j <= v; j++)
            d[i][j] = 1e9;
    while (e--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        d[x][y] = z;
    }
    for (int k = 1; k <= v; k++)
        for (int i = 1; i <= v; i++)
            for (int j = 1; j <= v; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    ll ans = 0;
    for (int i = 0; i <= s; i++)
        if (d[f[i]][f[i + 1]] < 1e9)
            ans += d[f[i]][f[i + 1]];
        else
        {
            ans = -1;
            break;
        }
    cout << ans;
    return 0;
}
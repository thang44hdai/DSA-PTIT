#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll x[15][15], y[15][15];
ll M = 1e9 + 7;
int n, k;
void Mul(ll a[15][15], ll b[15][15])
{
    ll c[n + 1][n + 1] = {};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % M;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = c[i][j];
}
void Pow(ll a[15][15], int k)
{
    if (k == 1)
        return;
    Pow(a, k / 2);
    Mul(a, a);
    if (k % 2)
        Mul(a, y);
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
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> x[i][j];
                y[i][j] = x[i][j];
            }
        Pow(x, k);
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans += x[i][n];
            ans %= M;
        }
        cout << ans << "\n";
    }

    return 0;
}
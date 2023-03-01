#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll M = 1e9 + 7;
ll n;

ll x[2][2], y[2][2];
void init()
{
    x[0][0] = x[0][1] = x[1][0] = 1;
    x[1][1] = 0;
    y[0][0] = y[1][0] = y[0][1] = 1;
    y[1][1] = 0;
}
void mul(ll a[2][2], ll b[2][2])
{
    ll c[2][2] = {};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
                c[i][j] = (c[i][j] + a[i][k] * b[k][j] % M) % M;
        }
    }
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            a[i][j] = c[i][j];
}
void pow(ll a[2][2], ll k)
{
    if (k <= 1)
        return;
    pow(a, k / 2);
    mul(a, a);
    if (k % 2)
        mul(a, y);
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
        cin >> n;
        init();
        pow(x, n-1);
        cout << x[0][0] << "\n";
    }

    return 0;
}
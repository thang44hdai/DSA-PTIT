#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

ll n, k;
int f[30];
void init()
{
    f[1] = 1;
    for (int i = 2; i <= 25; i++)
        f[i] = f[i - 1] * 2;
}
void sol()
{
    for (int i = n; i >= 1; i--)
    {
        if (k > f[i])
            k -= f[i];
        else if (k == f[i])
        {
            cout << char('A' + i - 1) << "\n";
            return;
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
    init();
    while (t--)
    {
        cin >> n >> k;
        sol();
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, s, m;
void sol()
{
    if (n > m or 6 * (n - m) < m)
    {
        cout << -1 << "\n";
        return;
    }
    cout << ceil((float)(s * m) / n) << "";
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
        cin >> n >> s >> m;
        sol();
    }
    return 0;
}
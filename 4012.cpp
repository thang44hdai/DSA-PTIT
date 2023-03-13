#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;
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
        ll a[n], b[m];
        for (ll &i : a)
            cin >> i;
        for (ll &i : b)
            cin >> i;
        ll ans[500] = {};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                ans[i + j] += a[i] * b[j];
        for (int i = 0; i < n + m - 1; i++)
            cout << ans[i] << " ";
        cout << '\n';
    }
    return 0;
}
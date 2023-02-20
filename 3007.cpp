#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;

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
        ll a[n], b[n];
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        sort(a, a + n);
        sort(b, b + n, greater<>());
        ll ans = 0;
        for (int i = 0; i < n; i++)
            ans += a[i] * b[i];
        cout << ans << "\n";
    }
    return 0;
}

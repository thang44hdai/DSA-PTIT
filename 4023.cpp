#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll a[n];
        for (auto &i : a)
            cin >> i;
        sort(a, a + n);
        ll cnt = 0;
        for (int i = 0; i < n; i++)
            cnt += (ll)(lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1));
        cout << cnt << "\n";
    }
    return 0;
}
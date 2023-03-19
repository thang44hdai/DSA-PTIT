#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (ll &i : a)
            cin >> i;
        ll up[n], down[n];
        for (int i = 0; i < n; i++)
            up[i] = down[i] = a[i];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < i; j++)
                if (a[j] < a[i])
                    up[i] = max(up[i], up[j] + a[i]);
        for (int i = n - 1; i >= 0; i--)
            for (int j = n; j > i; j--)
                if (a[j] < a[i])
                    down[i] = max(down[i], down[j] + a[i]);
        ll Max = 0;
        for (int i = 0; i < n; i++)
            Max = max(Max, up[i] + down[i] - a[i]);
        cout << Max << "\n";
    }

    return 0;
}
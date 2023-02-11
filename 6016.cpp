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
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        sort(a, a + n);
        sort(b, b + m);
        cout << a[n - 1] * b[0] << "\n";
    }
    return 0;
}
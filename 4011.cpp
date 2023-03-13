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
        string x, y;
        cin >> x >> y;
        ll x1 = 0, y1 = 0;
        for (int i = x.length() - 1; i >= 0; i--)
            x1 += (x[i] - '0') * pow(2, x.length() - 1 - i);
        for (int i = y.length() - 1; i >= 0; i--)
            y1 += (y[i] - '0') * pow(2, y.length() - 1 - i);
        cout << x1 * y1 << "\n";
    }
    return 0;
}
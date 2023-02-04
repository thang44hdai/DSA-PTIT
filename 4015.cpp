#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

ll n, m, k;
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
        int idx = upper_bound(a, a + n, k) - a;
        if (idx == 0)
            cout << -1 << "\n";
        else
            cout << idx << "\n";
    }
    return 0;
}
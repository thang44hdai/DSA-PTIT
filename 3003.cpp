#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll Mod = 1e9 + 7;
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
        int a[n];
        for (auto &i : a)
            cin >> i;
        ll sum = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
            sum = (sum + a[i] * i) % Mod;
        cout << sum << "\n";
    }
    return 0;
}
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
    vector<int> vt;
    cin.ignore();
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (auto &i : a)
            cin >> i;
        sort(a, a + n);
        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i += 2)
            sum1 = sum1 * 10 + a[i];
        for (int i = 1; i < n; i += 2)
            sum2 = sum2 * 10 + a[i];
        cout << sum1 + sum2 << "\n";
    }

    return 0;
}
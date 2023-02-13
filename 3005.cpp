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
        cin >> n >> k;
        ll a[n];
        ll total = 0;
        for (auto &i : a)
        {
            cin >> i;
            total += i;
        }
        sort(a, a + n);
        ll sum = 0;
        if (k > n - k)
        {
            for (int i = n - k; i < n; i++)
                sum += a[i];
            cout << 2 * sum - total << "\n";
        }
        else
        {
            for (int i = k; i < n; i++)
                sum += a[i];
            cout << 2 * sum - total << "\n";
        }
    }

    return 0;
}
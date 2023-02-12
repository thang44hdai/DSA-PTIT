#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll n, k;

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
        int cnt = 0;
        for (int i = 0; i < n - 2; i++)
            for (int j = i + 1; j < n - 1; j++)
            {
                ll sum = k - a[i] - a[j];
                cnt += lower_bound(a + j + 1, a + n, sum) - (a + j + 1);
            }
        cout << cnt << "\n";
    }
    return 0;
}
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
        bool check = false;
        for (ll i = 0; i < n; i++)
        {
            check = false;
            for (ll j = i + 1; j < n; j++)
            {
                if (binary_search(a + j + 1, a + n, k - a[i] - a[j]))
                {
                    cout << "YES";
                    check = true;
                    break;
                }
            }
            if (check)
                break;
        }
        if (!check)
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
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
        cin >> n;
        ll a[n], b[n - 1];
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        int idx = 0;
        while (idx < n - 1 and a[idx] == b[idx])
            idx++;
        if (idx == n - 1)
            cout << n;
        else
            cout << idx + 1;
        cout << "\n";
    }

    return 0;
}
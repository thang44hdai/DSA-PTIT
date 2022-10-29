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
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        int idx = k;
        while (a[idx] >= n - k + idx)
            idx--;
        if (idx < 1)
        {
            for (int i = 1; i <= k; i++)
                cout << i << " ";
            cout << "\n";
            continue;
        }
        a[idx]++;
        for (int i = idx + 1; i <= k; i++)
            a[i] = a[i - 1] + 1;
        for (int i = 1; i <= k; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
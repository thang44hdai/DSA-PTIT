#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

// Sinh hoán vị chập k của n
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
        cin >> n >> k;
        int a[n + 1];
        int cnt[n + 1] = {};
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int idx = k;
        while (idx and a[idx] >= n - k + idx)
            idx--;
        if (idx == 0)
        {
            cout << k << "\n";
            continue;
        }
        a[idx]++;
        for (int j = idx + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
        int dem = 0;
        for (int i = 1; i <= k; i++)
        {
            cnt[a[i]]++;
            if (cnt[a[i]] == 1)
                dem++;
        }
        // for (int i = 1; i <= k; i++)
        //     cout<<a[i]<<" ";
        cout << dem << "\n";
    }

    return 0;
}

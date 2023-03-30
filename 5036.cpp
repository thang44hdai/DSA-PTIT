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
        int n;
        cin >> n;
        float a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i] >> b[i];
        int ans1 = 0;
        int f1[n];
        for (int i = 0; i < n; i++)
        {
            f1[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j] and b[i] < b[j])
                    f1[i] = max(f1[i], f1[j] + 1);
            }
            ans1 = max(ans1, f1[i]);
        }
        cout << ans1 << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;

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
        int a[n];
        for (auto &i : a)
            cin >> i;
        int ans = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int sum = a[i] + a[j];
                if (abs(sum) < abs(ans))
                    ans = sum;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
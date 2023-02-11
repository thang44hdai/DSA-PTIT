#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a[n];
        ll cnt[1005] = {};
        for (auto &i : a)
        {
            cin >> i;
            cnt[i]++;
        }
        ll count = 0;
        for (auto i : a)
            if (cnt[i] and cnt[m - i] and m>=i)
            {
                if (i != m - i)
                    count += cnt[i] * cnt[m - i];
                else
                    count += cnt[i] * (cnt[i] - 1) / 2;
                cnt[i] = cnt[m - i] = 0;
            }
        cout << count << "\n";
    }
    return 0;
}
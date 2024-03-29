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
        int a[n], b[m];
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        int ans = 0;
        for (auto i : a)
            for (auto j : b)
                if (j * log(i) > i * log(j))
                    ans++;
        cout << ans << "\n";
    }
    return 0;
}
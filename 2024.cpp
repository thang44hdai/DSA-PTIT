#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try();
    sort(ans.begin(), ans.end());
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j;
        cout << "\n";
    }
    return 0;
}
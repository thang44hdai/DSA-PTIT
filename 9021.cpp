#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
int a[1005][1005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    vector<int> vt[n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j])
                vt[i].push_back(j);
    for (int i = 1; i <= n; i++)
    {
        for (auto j : vt[i])
            cout << j << " ";
        cout << "\n";
    }
    return 0;
}

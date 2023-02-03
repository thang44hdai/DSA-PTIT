#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vector<int> vt[v + 1];
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        for (int i = 1; i <= v; i++)
            sort(vt[i].begin(), vt[i].end());
        for (int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for (auto j : vt[i])
                cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}
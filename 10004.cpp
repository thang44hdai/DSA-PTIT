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
        int v, e;
        cin >> v >> e;
        vector<int> vt[v + 1];
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        int cnt = 0;
        for (int i = 1; i <= v; i++)
            if (vt[i].size() % 2 == 0)
                cnt++;
        if (cnt == v)
            cout << 2;
        else if (v - cnt <= 2)
            cout << 1;
        else
            cout << 0;
        cout << "\n";
    }

    return 0;
}
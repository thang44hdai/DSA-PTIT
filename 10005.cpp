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
        vector<int> vao[v + 1], ra[v + 1];
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vao[y].push_back(x);
            ra[x].push_back(y);
        }
        int cnt = 0;
        for (int i = 1; i <= v; i++)
            if (vao[i].size() == ra[i].size())
                cnt++;
        if (cnt == v)
            cout << 1;
        else
            cout << 0;
        cout << "\n";
    }

    return 0;
}
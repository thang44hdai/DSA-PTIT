#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int v, e;
int num[1005] = {};
int low[1005] = {};
int ok[1005] = {};
int par[1005] = {};
vector<pair<int, int>> kq;
vector<int> vt[1005];

int cnt;

void dfs(int u = 1)
{
    ok[u] = 1;
    low[u] = num[u] = cnt++;
    for (int i : vt[u])
    {
        if (i == par[u])
            continue;
        if (!ok[i])
        {
            par[i] = u;
            dfs(i);
            low[u] = min(low[u], low[i]);
            if (low[i] == num[i])
            {
                if (u < i)
                    kq.push_back({u, i});
                else
                    kq.push_back({i, u});
            }
        }
        else
            low[u] = min(low[u], num[i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        memset(ok, 0, sizeof(ok));
        memset(num, 0, sizeof(num));
        memset(low, 0, sizeof(low));
        memset(par, 0, sizeof(par));
        for (int i = 1; i <= v; i++)
            vt[i].clear();
        cnt = 0;

        cin >> v >> e;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        dfs();
        if (kq.size() == 0)
            cout << -1;
        else
        {
            sort(kq.begin(), kq.end());
            for (auto i : kq)
                if (i.first < i.second)
                    cout << i.first << " " << i.second << " ";
        }
        kq.clear();
        cout << "\n";
    }
    return 0;
}
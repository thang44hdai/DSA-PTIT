#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e, u;
vector<pair<ll, int>> vt[105];
int d[105] = {};
priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
void Dijkstra(int u)
{
    d[u] = 0;
    pq.push({d[u], u});
    while (!pq.empty())
    {
        pair<ll, int> top = pq.top();
        pq.pop();
        if (top.first > d[top.second])
            continue;
        for (auto i : vt[top.second])
        {
            if (d[i.second] > d[top.second] + i.first)
            {
                d[i.second] = d[top.second] + i.first;
                pq.push({d[i.second], i.second});
            }
        }
    }
    for (int i = 1; i <= v; i++)
    {
        if (d[i] != 1e9)
            cout << d[i] << " ";
        else
            cout << -1 << " ";
    }
    cout << "\n";
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
        fill(d, d + 105, 1e9);
        cin >> v >> e >> u;
        while (e--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            vt[x].push_back({z, y});
        }

        Dijkstra(u);
        for (int i = 1; i <= v; ++i)
            vt[i].clear();
    }

    return 0;
}
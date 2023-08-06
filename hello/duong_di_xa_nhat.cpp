#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
vector<pair<int, int>> ke[100005];
priority_queue<pair<int, int>> pq;

int dijkstra(int u)
{
    int d[100005] = {};
    d[u] = 0;
    pq.push({0, u});
    while (pq.size())
    {
        auto top = pq.top();
        pq.pop();
        if (top.first < d[top.second])
            continue;
        for (auto i : ke[top.second])
        {
            if (d[i.second] < d[top.second] + i.first)
            {
                d[i.second] = d[top.second] + i.first;
                pq.push({d[i.second], i.second});
            }
        }
    }
    return *max_element(d, d + n + 5);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back({1, y});
    }
    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, dijkstra(i));
    }
    cout << ans;
    return 0;
}
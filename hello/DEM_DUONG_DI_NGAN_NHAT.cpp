#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m, s;
ll d[100005];
ll route[100005];
vector<pair<ll, ll>> ke[100005];
void dijkstra(ll s)
{
    fill(d, d + n + 5, 1e18);
    d[s] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> pq;
    pq.push({d[s], s});
    route[1] = 1;
    while (pq.size())
    {
        ll d_top = pq.top().first;
        ll top = pq.top().second;
        pq.pop();
        if (d_top > d[top])
            continue;
        for (auto i : ke[top])
        {
            ll v = i.first;
            ll w = i.second;
            if (d[v] == d[top] + w)
                route[v] += route[top];
            if (d[v] > d[top] + w)
            {
                d[v] = d[top] + w;
                route[v] = route[top];
                pq.push({d[v], v});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    while (m--)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        ke[x].push_back({y, w});
        ke[y].push_back({x, w});
        /* code */
    }
    dijkstra(1);
    cout << d[n] << " " << route[n];
    return 0;
}
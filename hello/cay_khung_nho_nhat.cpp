#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

vector<pair<ll, ll>> ke[300000];
int visited[300000] = {};
ll w[300000] = {};
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> pq;

void Prim(int u)
{
    w[u] = 0;
    pq.push({w[u], u});
    while (!pq.empty())
    {
        auto tmp = pq.top();
        pq.pop();
        for (auto i : ke[tmp.second])
        {
            if (i.second < w[i.first] && visited[i.first] == 0)
            {
                w[i.first] = i.second;
                pq.push({w[i.first], i.first});
            }
        }
        visited[tmp.second] = 1;
    }
}

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
        while (e--)
        {
            ll x, y, z;
            cin >> x >> y >> z;
            ke[x].push_back({y, z});
            ke[y].push_back({x, z});
        }
        Prim(1);
        ll ans = 0;
        for (int i = 1; i <= v; i++)
            ans += w[i];
        cout << ans;
        cout << '\n';
        for (int i = 0; i < 200009; i++)
        {
            ke[i].clear();
            visited[i] = 0;
            w[i] = 1e9;
        }
    }
    return 0;
}
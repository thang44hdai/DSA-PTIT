#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int v, e;
vector<int> ke[1005];
int ok[1005];
vector<pair<int, int>> canh;
int bfs(int x, int y)
{
    fill(ok, ok + v + 5, 0);
    queue<int> q;
    q.push(1);
    ok[1] = 1;
    while (q.size())
    {
        int top = q.front();
        q.pop();
        for (auto i : ke[top])
        {
            if ((i == x and top == y) or (i == y and top == x))
                continue;
            if (!ok[i])
            {
                ok[i] = 1;
                q.push(i);
            }
        }
    }
    for (int i = 1; i <= v; i++)
        if (ok[i] == 0)
            return 1;
    return 0;
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
        cin >> v >> e;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
            canh.push_back({x, y});
        }
        map<int, int> mp;
        for (auto i : canh)
        {
            if (bfs(i.first, i.second))
                if (i.first > i.second)
                    mp[i.second] = i.first;
                else
                    mp[i.first] = i.second;
        }
        cout << mp.size() << "\n";
        for (auto i : mp)
            cout << "(" << i.first << " " << i.second << ") ";
        cout << "\n";
        for (int i = 1; i <= v; i++)
            ke[i].clear();
        canh.clear();
    }
    return 0;
}
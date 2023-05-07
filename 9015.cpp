#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e;
vector<int> ke[1005];
int ok[1005];
int ban_bac_vao[1005];
bool bfs()
{
    queue<int> q;
    for (int i = 1; i <= v; i++)
        if (ban_bac_vao[i] == 0)
            q.push(i);
    int cnt = 0;
    while (q.size())
    {
        int top = q.front();
        q.pop();
        cnt++;
        for (int i : ke[top])
        {
            ban_bac_vao[i]--;
            if (ban_bac_vao[i] == 0)
                q.push(i);
        }
    }
    return cnt == v;
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
            ban_bac_vao[y]++;
        }
        fill(ok, ok + v + 5, 0);
        fill(ban_bac_vao, ban_bac_vao + v + 5, 0);
        if (bfs())
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
        for (int i = 1; i <= v; i++)
            ke[i].clear();
    }
    return 0;
}

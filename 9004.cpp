#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int v, e, u;
vector<int> vt[1005];
queue<int> q;
int ok[1005] = {};
void dfs(int x = u)
{
    int top = q.front();
    ok[top]=1;
    cout << top << " ";
    q.pop();
    for (int ke : vt[top])
    {
        if (!ok[ke])
        {
            q.push(ke);
            ok[ke] = 1;
            dfs(ke);
        }
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
        cin >> v >> e >> u;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        q.push(u);
        dfs();
        cout << "\n";
        for (int i = 1; i <= v; i++)
            vt[i].clear();
        fill(ok, ok + 1005, 0);
    }
    return 0;
}
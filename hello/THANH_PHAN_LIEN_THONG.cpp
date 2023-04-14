#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

vector<int> ke[1005];
int vs[1005] = {};

void DFS(int u)
{
    vs[u] = 1;
    for (auto x : ke[u])
        if (!vs[x])
            DFS(x);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, e;
    cin >> n >> m >> e;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    DFS(e);
    int ok = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
        {
            ok = 1;
            cout << i << endl;
        }
    }
    if (!ok)
        cout << ok;
    return 0;
}
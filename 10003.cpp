#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int v, e;
int root[1005];
int find_root(int u)
{
    if (u == root[u])
        return u;
    return root[u] = find_root(root[u]);
}
string Union(vector<pair<int, int>> f)
{
    for (auto &i : f)
    {
        int a = find_root(i.first);
        int b = find_root(i.second);
        if (a != b)
            root[b] = a;
        else
            return "YES";
    }
    return "NO";
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
        cin >> v >> e;
        for (int i = 1; i <= v; i++)
            root[i] = i;
        vector<pair<int, int>> vt;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            vt.push_back({x, y});
        }
        cout << Union(vt) << "\n";
    }
    return 0;
}
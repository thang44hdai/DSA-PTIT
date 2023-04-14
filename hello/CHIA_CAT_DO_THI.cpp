#include <bits/stdc++.h>
using namespace std;

#define ll long long

int t, n, m;
vector<int> ke[1000001];
int vs[1000001];

void DFS(int u)
{
    vs[u] = 1;
    for (auto x : ke[u])
    {
        if (!vs[x])
            DFS(x);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int tplt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!vs[i])
            {
                tplt++;
                DFS(i);
            }
        }
        int ans = 0;
        int pos = 0;
        int ok = 0;
        for (int i = 1; i <= n; i++)
        {
            vs[i] = 1;
            int dem = 0;
            for (int j = 1; j <= n; j++)
            {
                if (!vs[j])
                {
                    dem++;
                    DFS(j);
                }
            }
            if (dem > tplt)
            {
                ok = 1;
                if (ans < dem)
                {
                    ans = dem;
                    pos = i;
                }
            }
            memset(vs, false, sizeof(vs));
        }
        if (ok)
            cout << pos << endl;
        else
            cout << 0 << endl;
        memset(vs, false, sizeof(vs));
        for (int i = 1; i <= n; i++)
            ke[i].clear();
        
    }
    return 0;
}
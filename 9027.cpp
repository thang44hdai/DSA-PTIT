#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m, u, v, q;
int root[1005];

int find_root(int x)
{
    if (x == root[x])
        return x;
    return root[x] = find_root(root[x]);
}

void dsu(int x, int y)
{
    int a = find_root(x);
    int b = find_root(y);
    if (a != b)
        root[b] = a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            root[i] = i;
        while (m--)
        {
            cin >> u >> v;
            dsu(u, v);
        }
        cin >> q;
        while (q--)
        {
            cin >> u >> v;
            if (find_root(u) != find_root(v))
                cout << "NO";
            else
                cout << "YES";
            cout << "\n";
        }
    }
    return 0;
}

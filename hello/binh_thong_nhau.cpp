#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int root[100005];
int find_root(int u)
{
    if (u == root[u])
        return root[u];
    return root[u] = find_root(root[u]);
}
void dsu(int x, int y)
{
    int a = find_root(x), b = find_root(y);
    if (a != b)
        root[a] = b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= 100000; i++)
        root[i] = i;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if (k == 2)
        {
            if (find_root(x) != find_root(y))
                cout << 0;
            else
                cout << 1;
            cout << "\n";
        }
        else
            dsu(x, y);
    }
    return 0;
}
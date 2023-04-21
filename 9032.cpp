#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;
int root[100005];
int Size[100005];
int find_root(int u)
{
    if (u == root[u])
        return u;
    return root[u] = find_root(root[u]);
}
void Union(int x, int y)
{
    int a = find_root(x);
    int b = find_root(y);
    if (a != b)
        if (Size[a] >= Size[b])
        {
            Size[a] += Size[b];
            root[b] = a;
        }
        else
        {
            Size[b] += Size[a];
            root[a] = b;
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
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            root[i] = i;
            Size[i] = 1;
        }
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            Union(x, y);
        }
        cout << *max_element(Size + 1, Size + n + 1) << "\n";
    }
    return 0;
}
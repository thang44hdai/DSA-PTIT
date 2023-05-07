#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n, m;
bool check[1001];
vector<int> ke[1001];
bool ok;
void dfs(int u, int cnt)
{
    if (cnt == n)
        ok = true;
    check[u] = true;
    for (auto i : ke[u])
        if (!check[i])
            dfs(i, cnt + 1);
    check[u] = false;
}
int Halminton()
{
    for (int i = 1; i <= n; i++)
    {
        memset(check, false, sizeof(check));
        ok = false;
        dfs(i, 1);
        if (ok)
            return 1;
    }
    return 0;
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
        cin >> n >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        cout << Halminton() << "\n";
        for (int i = 1; i <= n; i++)
            ke[i].clear();
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
vector<int> ke[100005];

int ok[100005]={};
int res = 0;
int point;
void dfs(int u, int cnt)
{
    if (cnt > res)
    {
        res = cnt;
        point = u;
    }
    for (int x : ke[u])
    {
        if (!ok[x])
        {
            ok[x] = 1;
            dfs(x, cnt + 1);
            ok[x] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    dfs(1, 0);
    res = 0;
    dfs(point, 0);
    cout << res;
    return 0;
}
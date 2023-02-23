#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;
int a[15][15];
int ok[15] = {};
vector<int> vt;
vector<vector<int>> ans;

void Try(int i = 1, int sum = 0)
{
    if (sum > k)
        return;
    if (i == n + 1 and sum == k)
    {
        ans.push_back(vt);
        return;
    }
    for (int j = 1; j <= n; j++)// xét cột
    {
        if (!ok[j])
        {
            ok[j] = 1;
            vt.push_back(j);
            Try(i + 1, sum + a[i][j]);
            ok[j] = 0;
            vt.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    Try();
    cout << ans.size() << "\n";
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
ll a[20][20];
ll ans = 9999;
int ok[20] = {};
vector<int> vt;
vector<vector<int>> sol;
void Try(ll sum = 0)
{
    if (sum > ans)
        return;
    if (vt.size() == n)
    {
        if (sum + a[vt[vt.size() - 1]][1] < ans)
        {
            ans = min(ans, sum + a[vt[vt.size() - 1]][1]);
            sol.clear();
            sol.push_back(vt);
        }
        return;
    }
    for (int j = 2; j <= n; j++)
    {
        if (ok[j] == 0)
        {
            vt.push_back(j);
            ok[j] = 1;
            int l = vt.size();
            Try(sum + a[vt[l - 1]][vt[l - 2]]);
            vt.pop_back();
            ok[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    vt.push_back(1);
    Try();
    cout << "(";
    for (auto i : sol)
        for (auto j : i)
            cout << j << ",";
    cout << 1 << ")" << "\n";    
    cout << ans;
    return 0;
}
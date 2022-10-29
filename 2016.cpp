#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long
int n;
int a[25];
vector<int> vt;
vector<vector<int>> ans;
bool cmp(vector<int> a, vector<int> b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
}
void Try(int i = 1)
{
    if (vt.size() >= 2)
        ans.push_back(vt);
    for (int j = i; j <= n; j++)
    {
        if (vt.empty() or a[j] > vt[vt.size() - 1])
        {
            vt.push_back(a[j]);
            Try(j + 1);
            vt.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try();
    sort(ans.begin(), ans.end(), cmp);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
    return 0;
}
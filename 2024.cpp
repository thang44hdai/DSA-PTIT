#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long
int n;
int a[50];
vector<vector<string>> ans;
vector<string> vt;
void Try(int i = 0)
{
    if (vt.size() >= 2)
        ans.push_back(vt);
    for (int j = i + 1; j <= n; j++)
    {
        if (a[j] > a[i])
        {
            vt.push_back(to_string(a[j]));
            Try(j);
            vt.pop_back();
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
        cin >> a[i];
    Try();
    sort(ans.begin(), ans.end());
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
    return 0;
}
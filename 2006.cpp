#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long
int n, k;
int a[15];
vector<int> vt;
vector<vector<int>> ans;
int ok[15] = {};
void Try(int i = 1, int sum = 0)
{
    if (sum > k)
        return;
    if (sum == k)
    {
        sort(vt.begin(), vt.end());
        ans.push_back(vt);
    }
    for (int j = i; j <= n; j++)
    {
        if (ok[j] == 0)
        {
            ok[j] = 1;
            vt.push_back(a[j]);
            Try(j + 1, sum + a[j]);
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
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a+1, a+n+1);
        vt.clear();
        ans.clear();
        Try();
        if (ans.size() == 0)
            cout << -1;
        else
        {
            sort(ans.begin(), ans.end());
            for (auto i : ans)
            {
                cout << '[';
                for (int j = 0; j < i.size() - 1; j++)
                    cout << i[j] << " ";
                cout << i[i.size() - 1] << "] ";
            }
        }
        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, x;
vector<int> vt;
vector<vector<int>> ans;
int a[50];
void Try(int i = 1, int sum = 0)
{
    if (sum > x)
        return;
    if (sum == x)
    {
        ans.push_back(vt);
        return;
    }
    for (int j = i; j <= n; j++)
    {
        vt.push_back(a[j]);
        Try(j, sum + a[j]);
        vt.pop_back();
    }
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
        cin >> n >> x;
        ans.clear();
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        Try();
        if (!ans.size())
            cout << -1;
        else
        {
            cout << ans.size() << " ";
            for (auto i : ans)
            {
                cout << "{";
                for (int j = 0; j < i.size() - 1; j++)
                    cout << i[j] << " ";
                cout << i[i.size() - 1] << "} ";
            }
        }
        cout << "\n";
    }

    return 0;
}

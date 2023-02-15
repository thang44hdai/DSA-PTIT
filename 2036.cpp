#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;
int a[20];
vector<int> vt;
vector<vector<int>> ans;
void Try(int i = 1, int sum = 0)
{
    if (sum % 2)
    {
        vector<int> b(vt);
        sort(b.begin(), b.end(), greater<int>());
        ans.push_back(b);
    }
    for (int j = i; j <= n; j++)
    {
        vt.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        vt.pop_back();
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
        ans.clear();
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
    }

    return 0;
}
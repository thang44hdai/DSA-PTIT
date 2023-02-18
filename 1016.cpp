#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
int a[15];
vector<int> vt;
vector<vector<int>> ans;
void Try(int i = 1, int sum = 0)
{
    if (sum >= n)
    {
        if (sum == n)
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
        cin >> n;
        ans.clear();
        for (int i = 1; i <= n; i++)
            a[i] = i;
        sort(a + 1, a + n + 1, greater<>());
        Try();
        for (auto i : ans)
        {
            cout << "(";
            for (int j = 0; j < i.size() - 1; j++)
                cout << i[j] << " ";
            cout << i[i.size() - 1] << ") ";
        }
        cout << "\n";
    }
    return 0;
}

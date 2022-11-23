#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n, k;
int a[30];
vector<string> temp;
vector<vector<string>> res;
void solve()
{
    vector<string> x;
    for (int i = 1; i <= k; ++i)
    {
        x.push_back(temp[a[i]]);
    }
    sort(x.begin(), x.end());
    res.push_back(x);
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            solve();
        else
            Try(i + 1);
    }
}
void sol()
{
    map<string, bool> mp;
    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        mp[s] = true;
    }
    temp.push_back("");
    for (auto i : mp)
    {
        temp.push_back(i.first);
    }
    n = temp.size() - 1;
    Try(1);
    sort(res.begin(), res.end());
    for (auto i : res)
    {
        for (string j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    sol();
    return 0;
}
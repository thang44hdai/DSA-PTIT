#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;
vector<string> vt;
vector<string> x;
vector<vector<string>> ans;
void Try(int i = 0)
{
    if (x.size() == k)
    {
        ans.push_back(x);
        return;
    }
    for (int j = i; j < vt.size(); j++)
    {
        x.push_back(vt[j]);
        Try(j + 1);
        x.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
            vt.push_back(s);
    }
    sort(vt.begin(), vt.end());
    Try();
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
    return 0;
}

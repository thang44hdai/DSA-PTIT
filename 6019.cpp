#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
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
        int n;
        cin >> n;
        vector<pair<int, int>> vt;
        int cnt[100005] = {};
        int a[n];
        for (auto &i : a)
            cin >> i, cnt[i]++;
        for (auto i : a)
            if (cnt[i])
                vt.push_back({i, cnt[i]}), cnt[i] = 0;
        sort(vt.begin(), vt.end(), cmp);
        for (auto i : vt)
            for (int j = 1; j <= i.second; j++)
                cout << i.first << " ";
        cout << "\n";
    }
    return 0;
}
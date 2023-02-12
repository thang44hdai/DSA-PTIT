#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll n, k;

bool cmp(pair<int, int> a, pair<int, int> b)
{
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
        cin >> n;
        int a[n];
        vector<pair<int, int>> vt;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            vt.push_back({a[i], i});
        }
        sort(vt.begin(), vt.end(), cmp);
        int cnt = INT_MIN;
        int Min = vt[0].second, X = vt[0].first;
        for (int i = 1; i < n; i++)
        {
            if (vt[i].first != X)
                cnt = max(cnt, vt[i].second - Min);
            if (vt[i].second < Min)
            {
                Min = vt[i].second;
                X = vt[i].first;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
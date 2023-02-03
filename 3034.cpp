#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<int, int>> vt;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            vt.push_back({x, y});
        }
        sort(vt.begin(), vt.end(), cmp);
        int cnt = 0;
        int l = 0;
        for (auto i : vt)
            if (i.first >= l)
            {
                l = i.second;
                cnt++;
            }
        cout << cnt << "\n";
    }
    return 0;
}
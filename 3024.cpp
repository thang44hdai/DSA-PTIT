#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;
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
        int a[n], b[n];
        vector<pair<int, int>> vt;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            vt.push_back({a[i], b[i]});
        }
        sort(vt.begin(), vt.end(), cmp);
        int T = 0, cnt = 0;
        for (auto i : vt)
            if (T <= i.first)
            {
                T = i.second;
                cnt++;
            }
        // for(auto i: vt)
        //     cout<<i.first<<" "<<i.second<<"\n";
        cout << cnt << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;
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
    vector<int> vt;
    while (t--)
    {
        cin >> n;
        int a[n], b[n];
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        pair<int, int> vt[n];
        for (int i = 0; i < n; i++)
            vt[i] = {a[i], b[i]};
        sort(vt, vt + n, cmp);
        int T = 0, cnt = 0;
        for (auto i : vt)
            if (T <= i.first)
                cnt++, T = i.second;
        cout<<cnt<<"\n";
    }

    return 0;
}
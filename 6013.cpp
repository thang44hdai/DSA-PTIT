#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        unordered_map<int, int> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }
        if (mp[k])
            cout << mp[k];
        else
            cout << -1;
        cout << "\n";
    }
    return 0;
}
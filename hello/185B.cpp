#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    map<int, int> mp;
    for (int i : a)
        mp[i]++;
    for (auto &i : mp)
        cout << mp[3    ];
    return 0;
}
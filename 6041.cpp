#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll n, k;

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
        ll a[n];
        unordered_map<ll, ll> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }
        int Max = 0, num;
        bool check = false;
        for (auto i : a)
            if (mp[i] > n / 2)
                Max = max(Max, (int)mp[i]), num = i;
        if (!Max)
            cout << "NO";
        else
            cout << num;
        cout << "\n";
    }
    return 0;
}
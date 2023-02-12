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
        bool check = false;
        for (auto i : a)
            if (mp[i] > 1)
            {
                cout << i, check = true;
                break;
            }
        if (!check)
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
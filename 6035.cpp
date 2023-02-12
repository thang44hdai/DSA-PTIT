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
        cin >> n >> k;
        ll a[n];
        map<ll, ll> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }
        int cnt = 0;
        for (auto i : mp)
        {
            if (mp[k - i.first])
            {
                if (i.first * 2 == k)
                {
                    cnt += (i.second - 1) * i.second / 2;
                    i.second = 0;
                }
                else
                {
                    cnt += i.second * mp[k - i.first];
                    mp[i.first] = 0;
                    mp[k - i.first] = 0;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
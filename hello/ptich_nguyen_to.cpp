#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (ll i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ll cnt = 0;
                while (n % i == 0)
                {
                    cnt++;
                    n /= i;
                }
                mp[i] = cnt;
            }
        }
        if (n > 1)
            mp[n] = 1;
        vector<pair<ll, ll>> vt;
        for (auto i : mp)
            vt.push_back({i.first, i.second});

        for (auto i : vt)
            cout << i.first << " " << i.second << "\n";
        cout << "\n";
    }
    return 0;
}
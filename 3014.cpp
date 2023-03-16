#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define ll long long
bool check(string a, string b)
{
    int n = a.length(), m = b.length();
    int idx = 0;
    for (int i = 0; i < m; i++)
        if (a[idx] == b[i])
            idx++;
    return idx == n;
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
        string s;
        cin >> s;
        ll num = stoll(s);
        ll x = pow(num, 1.0 / 3);
        bool test = false;
        for (ll i = x + 1; i >= 1; i--)
        {
            ll j = i * i * i;
            string k = to_string(j);
            if (check(k, s))
            {
                cout << k << "\n";
                test = true;
                break;
            }
        }
        if (!test)
            cout << -1 << "\n";
    }
    return 0;
}

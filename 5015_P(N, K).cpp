#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll m = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll mul = 1;
        ll st = n, e = n - k + 1;
        while (st >= e)
        {
            mul = (mul * st) % m;
            st--;
        }
        cout << mul << "\n";
    }

    return 0;
}
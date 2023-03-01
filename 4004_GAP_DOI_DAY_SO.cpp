#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int sol(int n, ll k)
{
    ll x = pow(2, n - 1);
    if (k == x)
        return n;
    if (k > x)
        return sol(n - 1, k - x);
    else
        return sol(n - 1, k);
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
        ll k;
        cin >> n >> k;
        cout << sol(n, k) << "\n";
    }
    return 0;
}
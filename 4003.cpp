#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll M = 123456789;
ll Pow(ll n)
{
    if (n == 0)
        return 1;
    ll tmp = Pow(n / 2);
    if (n % 2)
        return (2 * (tmp * tmp)) % M;
    else
        return (tmp * tmp) % M;
}
// kiến thức là 2^(n-1) là số dãy có tổng là n
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
        cout << Pow(n - 1) << "\n";
    }
    return 0;
}
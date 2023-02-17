#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

/*
Định lý Fermat nhỏ cho biết: a^p ≡ a (mod p) với a bất kì và p là số nguyên tố,
hay nói cách khác a^(p-1) ≡ 1 (mod p),
hay a^( q(p-1) ) ≡ 1^q ≡ 1 (mod p),
hay a^ (q(p-1) + r) = a^(q(p-1))* a^r ≡ 1 * a^r (mod p) = a^r (mod p).
Đặt r = b % (m - 1). Ta có x^b ≡ x^r (mod m) với m là số nguyên tố.
*/
ll M = 1e9 + 7;
ll a, b;
ll Pow(ll x, ll y)
{
    if (y == 0)
        return 1;
    ll z = Pow(x, y / 2) % M;
    if (y % 2)
        return ((z * z) % M) * x % M;
    else
        return (z * z) % M;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while (cin >> a >> b)
    {
        if (a == b and a == 0)
            break;
        a %= M;
        b %= (M - 1);
        cout << Pow(a, b) << "\n";
    }
    return 0;
}
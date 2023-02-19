#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll p, q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> p >> q;
        while (q % p)
        {
            ll mau = ceil(q * 1.0 / p);
            cout << 1 << "/" << mau << " + ";
            p = p * mau - q;
            q *= mau;
        }
        cout << 1 << "/" << q / p << "\n";
    }

    return 0;
}
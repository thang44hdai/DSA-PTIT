#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll sum = 0;
    ll x;
    while (n--)
    {
        cin >> x;
        if (x > 0)
            sum += 2 * x;
    }
    cout << sum;
    return 0;
}

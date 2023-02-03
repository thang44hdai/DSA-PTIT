#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

ll n, k;
ll Mod = 1e9 + 7;

int Pow(int n, int k)
{
    if (k == 1)
        return n;
    if (k == 0)
        return 1;
    ll tmp = Pow(n, k / 2);
    if (k % 2)
        return (((n * tmp) % Mod) * tmp) % Mod;
    else
        return (tmp * tmp) % Mod;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << Pow(n, k) << "\n";
    }
    return 0;
}
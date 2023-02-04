#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

ll n, m, k;
ll fi[93];
void init()
{
    fi[1] = fi[2] = 1;
    for (int i = 3; i <= 92; i++)
        fi[i] = fi[i - 2] + fi[i - 1];
}
void sol()
{
    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }
    if (n == 2)
    {
        cout << 1 << "\n";
        return;
    }
    if (k > fi[n - 2])
    {
        k -= fi[n - 2];
        n--;
        sol();
    }
    else
    {
        n -= 2;
        sol();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    init();
    while (t--)
    {
        cin >> n >> k;
       sol();
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n, m, k;
void sol(int k, char x, char y, char z)
{
    if (k == 1)
    {
        cout << x << " -> " << z << "\n";
        return;
    }
    sol(k - 1, x, z, y);
    sol(1, x, y, z);
    sol(k - 1, y, x, z);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    sol(n, 'A', 'B', 'C');
    return 0;
}
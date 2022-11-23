#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n, k;
int a[18];
void sol()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i];
    if (sum == k)
    {
        for (int i = 1; i <= n; i++)
            cout << a[i];
        cout << "\n";
    }
}
void sinh()
{
    while (1)
    {
        sol();
        int i = n;
        while (i > 0 and a[i] == 1)
            i--;
        if (i == 0)
            return;
        a[i] = 1;
        for (int j = i + 1; j <= n; j++)
            a[j] = 0;
    }
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
        cin >> n >> k;
        fill(a, a + n + 1, 0);
        sinh();
    }
    return 0;
}
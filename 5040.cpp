#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (auto &i : a)
            cin >> i;
        int up[n] = {1}, down[n];
        for (int i = 1; i < n; i++)
            if (a[i] > a[i - 1])
                up[i] = up[i - 1] + 1;
            else
                up[i] = 1;
        down[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
            if (a[i] > a[i + 1])
                down[i] = down[i + 1] + 1;
            else
                down[i] = 1;
        int Max = 0;
        for (int i = 0; i < n; i++)
            Max = max(Max, up[i] + down[i]);
        cout << Max - 1 << "\n";
    }
    return 0;
}
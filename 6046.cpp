#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;

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
        sort(a, a + n);
        int Min = INT_MAX;
        for (int i = 0; i < n - 1; i++)
            Min = min(Min, a[i + 1] - a[i]);
        cout << Min << "\n";
    }
    return 0;
}
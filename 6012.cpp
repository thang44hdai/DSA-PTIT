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
        cin >> n >> k;
        int a[n];
        for (auto &i : a)
            cin >> i;
        sort(a, a + n);
        int i = n - 1;
        while (k--)
            cout << a[i--] << " ";
        cout << "\n";
    }
    return 0;
}
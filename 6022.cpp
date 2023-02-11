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
        int Min = a[0];
        int i = 1;
        while (i < n and a[i] == Min)
            i++;
        if (i == n)
            cout << -1;
        else
            cout << a[0] << " " << a[i];
        cout << "\n";
    }
    return 0;
}
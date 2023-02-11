#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;

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
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (l != r)
                cout << a[r] << " " << a[l] << " ";
            else
                cout << a[l] << " ";
            l++, r--;
        }
        cout << "\n";
    }
    return 0;
}
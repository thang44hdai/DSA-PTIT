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
        int n;
        cin >> n;
        ll a[n];
        for (auto &i : a)
            cin >> i;
        bool check = false;
        for (int i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1])
            {
                cout << i + 1 << "\n";
                check = true;
                break;
            }
        if (!check)
            cout << 0 << "\n";
    }
    return 0;
}
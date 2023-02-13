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
        int sum = 0;
        for (auto &i : a)
        {
            cin >> i;
            sum += i;
        }
        int check = a[0];
        bool kt = true;
        for (int i = 1; i < n; i++)
        {
            if (check * 2 == sum - a[i])
            {
                cout << i + 1 << "\n";
                kt = false;
                break;
            }
            else
                check += a[i];
        }
        if (kt)
            cout << -1 << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1][n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[1][i];
        for (int i = 2; i <= n; i++)
            for (int j = 1; j <= n - i + 1; j++)
                a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
        for (int i = n; i >= 1; i--)
        {
            cout << "[";
            for (int j = 1; j <= n - i; j++)
                cout << a[i][j] << " ";

            cout << a[i][n - i + 1] << "] ";
        }
        cout << "\n";
    }
    return 0;
}
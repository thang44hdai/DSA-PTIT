#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (auto &i : a)
            cin >> i;
        int x[n][n];
        for (int i = 0; i < n; i++)
            x[0][i] = a[i];
        for (int i = 1; i < n; i++)
            for (int j = 0; j < n - i; j++)
                x[i][j] = x[i - 1][j] + x[i - 1][j + 1];
        for (int i = 0; i < n; i++)
        {
            cout << "[";
            for (int j = 0; j < n - i - 1; j++)
                cout << x[i][j] << " ";
            cout << x[i][n - i - 1] << "]\n";
        }
    }
    return 0;
}
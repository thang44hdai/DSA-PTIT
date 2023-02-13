#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll a[9][9];
int x[9], y[50], z[50];
ll Max;
void Try(int i = 1, ll sum = 0)
{
    if (i == 9)
    {
        Max = max(Max, sum);
        return;
    }
    for (int j = 1; j <= 8; j++)
    {
        if (!x[j] and !y[i + j - 1] and !z[i - j + 8])
        {
            x[j] = y[i + j - 1] = z[i - j + 8] = 1;
            Try(i + 1, sum + a[i][j]);
            x[j] = y[i + j - 1] = z[i - j + 8] = 0;
        }
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
        Max = 0;
        for (int i = 1; i <= 8; i++)
            for (int j = 1; j <= 8; j++)
                cin >> a[i][j];
        Try();
        cout << Max << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n;
int a[15][15];
vector<char> vt;
bool check = false;

void Try(int i = 1, int j = 1)
{
    if (i == n and j == n)
    {
        check = true;
        for (auto i : vt)
            cout << i;
        cout << " ";
        return;
    }
    if (i + 1 <= n and a[i + 1][j] == 1)
    {
        vt.push_back('D');
        a[i + 1][j] = 0;
        Try(i + 1, j);
        vt.pop_back();
        a[i + 1][j] = 1;
    }
    if (j - 1 >= 1 and a[i][j - 1] == 1)
    {
        vt.push_back('L');
        a[i][j - 1] = 0;
        Try(i, j - 1);
        vt.pop_back();
        a[i][j - 1] = 1;
    }
    if (j + 1 <= n and a[i][j + 1] == 1)
    {
        vt.push_back('R');
        a[i][j + 1] = 0;
        Try(i, j + 1);
        vt.pop_back();
        a[i][j + 1] = 1;
    }
    if (i - 1 >= 1 and a[i - 1][j] == 1)
    {
        vt.push_back('U');
        a[i - 1][j] = 0;
        Try(i - 1, j);
        vt.pop_back();
        a[i - 1][j] = 1;
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
        cin >> n;
        check = false;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        if (a[1][1] == 0 or a[n][n] == 0)
            cout << -1;
        else
        {
            Try();
            if (!check)
                cout << -1;
        }
        cout << "\n";
    }
    return 0;
}

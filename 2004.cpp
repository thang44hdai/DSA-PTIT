#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n;
int a[15][15];
bool check = false;
int X[] = {1, 0, 0, -1};
int Y[] = {0, -1, 1, 0};
set<string> st;
string s;
void Try(int i = 1, int j = 1)
{
    if (i == n and j == n)
    {
        check = true;
        st.insert(s);
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int dx = i + X[k];
        int dy = j + Y[k];
        if (dx >= 1 and dx <= n and dy >= 1 and dy <= n and a[dx][dy] == 1)
        {
            a[dx][dy] = 0;
            if (k == 0)
                s += 'D';
            else if (k == 1)
                s += 'L';
            else if (k == 2)
                s += 'R';
            else
                s += 'U';
            Try(dx, dy);
            s.pop_back();
            a[dx][dy] = 1;
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
        cin >> n;
        check = false;
        s = "";
        st.clear();
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        if (a[1][1] == 0 or a[n][n] == 0)
            cout << -1;
        else
        {
            a[1][1] = 0;
            Try();
            if (!check)
                cout << -1;
            for (auto i : st)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

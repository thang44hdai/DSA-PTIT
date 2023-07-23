#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char a[605][605];
        pair<int, int> start, end;
        start.first = -1;
        start.second = -1;
        end.first = -1;
        end.second = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'S')
                {
                    start.first = i;
                    start.second = j;
                }
                if (a[i][j] == 'T')
                {
                    end.first = i;
                    end.second = j;
                }
            }
        }
        queue<pair<int, int>> q;
        int d[605][605] = {};
        q.push({start.first, start.second});
        int check = 0;
        while (!q.empty())
        {
            pair<int, int> tmp = q.front();
            q.pop();
            a[tmp.first][tmp.second] = '*';
            int i1 = tmp.first;
            int j1 = tmp.second;
            i1 = tmp.first + 1;
            while (i1 < n && a[i1][j1] != '*')
            {
                d[i1][j1] = d[tmp.first][tmp.second] + 1;
                if (a[i1][j1] == 'T')
                {
                    check = 1;
                    break;
                }
                a[i1][j1] = '*';
                q.push({i1, j1});
                i1++;
            }
            i1 = tmp.first - 1;
            while (i1 >= 0 && a[i1][j1] != '*')
            {
                d[i1][j1] = d[tmp.first][tmp.second] + 1;
                if (a[i1][j1] == 'T')
                {
                    check = 1;
                    break;
                }
                a[i1][j1] = '*';
                q.push({i1, j1});
                i1--;
            }
            i1 = tmp.first;
            j1 = tmp.second + 1;
            while (j1 < m && a[i1][j1] != '*')
            {
                d[i1][j1] = d[tmp.first][tmp.second] + 1;
                if (a[i1][j1] == 'T')
                {
                    check = 1;
                    break;
                }
                a[i1][j1] = '*';
                q.push({i1, j1});
                j1++;
            }
            j1 = tmp.second - 1;
            while (j1 >= 0 && a[i1][j1] != '*')
            {
                d[i1][j1] = d[tmp.first][tmp.second] + 1;
                if (a[i1][j1] == 'T')
                {
                    check = 1;
                    break;
                }
                a[i1][j1] = '*';
                q.push({i1, j1});
                j1--;
            }
            if (check == 1)
                break;
        }
        if (d[end.first][end.second] <= 3)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
    return 0;
}
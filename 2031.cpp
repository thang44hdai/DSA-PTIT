#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

char c;
vector<char> vt;
int ok[50];
bool check()
{
    for (int i = 1; i < c - 'A'; i++)
        if (vt[i] == 'A' or vt[i] == 'E')
        {
            if (vt[i - 1] != 'A' and vt[i - 1] != 'E' and vt[i + 1] != 'A' and vt[i + 1] != 'E')
                return false;
        }
    return true;
}
void Try()
{
    if (vt.size() == c - 'A' + 1)
    {
        if (check())
        {
            for (auto i : vt)
                cout << i;
            cout << "\n";
        }
        return;
    }
    for (int i = 0; i <= c - 'A'; i++)
    {
        if (!ok[i])
        {
            vt.push_back(char('A' + i));
            ok[i] = 1;
            Try();
            vt.pop_back();
            ok[i] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> c;
    Try();
    return 0;
}
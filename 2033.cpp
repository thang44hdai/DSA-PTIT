#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n;
vector<int> vt;
int ok[50];

bool check()
{
    for (int i = 0; i < n - 1; i++)
        if (abs(vt[i] - vt[i + 1]) == 1)
            return false;
    return true;
}
void Try()
{
    if (vt.size() == n)
    {
        if (check())
        {
            for (auto i : vt)
                cout << i;
            cout << "\n";
        }
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!ok[i])
        {
            ok[i] = 1;
            vt.push_back(i);
            Try();
            ok[i] = 0;
            vt.pop_back();
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
        Try();
        cout << "\n";
    }
    return 0;
}
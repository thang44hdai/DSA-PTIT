#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n;
vector<int> vt;
int ok[15];
void Try()
{
    if (vt.size() == n)
    {
        for (auto i : vt)
            cout << i;
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++)
        if (!ok[i])
        {
            if (vt.empty())
            {
                vt.push_back(i);
                ok[i] = 1;
                Try();
                ok[i] = 0;
                vt.pop_back();
            }
            else if (abs(i - vt[vt.size() - 1]) > 1)
            {
                vt.push_back(i);
                ok[i] = 1;
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
    }
    return 0;
}
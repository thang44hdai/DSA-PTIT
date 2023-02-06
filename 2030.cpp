#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

char c;
int k;
vector<char> vt;
void Try()
{
    if (vt.size() == k)
    {
        for (auto i : vt)
            cout << i;
        cout << "\n";
        return;
    }
    for (int i = 0; i <= c - 'A'; i++)
    {
        if (vt.empty() or 'A' + i >= vt[vt.size() - 1])
        {
            vt.push_back(char('A' + i));
            Try();
            vt.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> c >> k;
    Try();
    return 0;
}
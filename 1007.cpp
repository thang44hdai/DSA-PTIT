#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
vector<char> vt;
int n;
void Try()
{
    if (vt.size() == n)
    {
        for (auto i : vt)
            cout << i;
        cout << " ";
        return;
    }
    for (char j = 'A'; j <= 'B'; j++)
    {
        vt.push_back(j);
        Try();
        vt.pop_back();
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
        vt.clear();
        cout << "\n";
    }
    return 0;
}
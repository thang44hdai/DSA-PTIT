#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vt.clear();
        sol();
        reverse(vt.begin(), vt.end());
        for (auto i : vt)
            cout << i;
        if (vt.empty())
            cout << -1;
        cout << "\n";
    }
}
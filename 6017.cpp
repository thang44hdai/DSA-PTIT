#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<int> vt;
        n += m;
        while (n--)
        {
            cin >> m;
            vt.push_back(m);
        }
        sort(vt.begin(), vt.end());
        for (auto i : vt)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
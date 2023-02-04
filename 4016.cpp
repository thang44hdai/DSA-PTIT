#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n, m, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        vector<int> vt;
        n += m;
        while (n--)
        {
            cin >> m;
            vt.push_back(m);
        }
        sort(vt.begin(), vt.end());
        cout << vt[k - 1] << "\n";
    }
    return 0;
}
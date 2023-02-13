#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;

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
        ll a[n];
        vector<ll> vt;
        for (auto &i : a)
        {
            cin >> i;
            vt.push_back(i * i);
        }
        sort(vt.begin(), vt.end());
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (binary_search(vt.begin() + j + 1, vt.end(), vt[i] + vt[j]))
                {
                    cout << "YES"
                         << "\n";
                    check = true;
                    break;
                }
            }
            if (check)
                break;
        }
        if (!check)
            cout << "NO"<< "\n";                
    }
    return 0;
}
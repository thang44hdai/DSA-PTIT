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
        int a[n];
        for (auto &i : a)
            cin >> i;
        vector<vector<int>> vt;
        for (int i = 0; i < n - 1; i++)
        {
            bool check = true;
            for (int j = 0; j < n - 1; j++)
                if (a[j] > a[j + 1])
                {
                    check = false;
                    swap(a[j], a[j + 1]);
                }
            if (check)
                break;
            vector<int> b;
            for (auto j : a)
                b.push_back(j);
            vt.push_back(b);
        }
        for (int i = vt.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (auto j : vt[i])
                cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}
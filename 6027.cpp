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
            for (int j = i + 1; j < n; j++)
                if (a[i] > a[j])
                    swap(a[i], a[j]);
            vector<int> b;
            for (auto j : a)
                b.push_back(j);
            vt.push_back(b);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (auto j : vt[i])
                cout << j << " ";
            cout << "\n";
        }
        
    }
    return 0;
}
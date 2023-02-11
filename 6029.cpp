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

    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    vector<vector<int>> vt;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j and a[j] < a[j - 1])
        {
            swap(a[j], a[j - 1]);
            j--;
        }
        vector<int> b;
        for (int k = 0; k <= i; k++)
            b.push_back(a[k]);
        vt.push_back(b);
    }
    for (int i = vt.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i << ": ";
        for (auto j : vt[i])
            cout << j << " ";
        cout << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;
vector<vector<int>> vt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    vt.push_back({1});
    vector<int> a;
    for (int i = 1; i <= n; i++)
        a.push_back(i);
    int gt = 1;
    vt.push_back(a);
    while (next_permutation(a.begin(), a.end()))
        vt.push_back(a);
    for (int i = 1; i * m <= vt.size(); i++)
    {
        for (auto i : vt[i * m])
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
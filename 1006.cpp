#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n;
int a[15];
vector<vector<int>> vt;
void print()
{
    for (int i=vt.size()-1;i>=0;i--)
    {
        for (auto j : vt[i])
            cout << j;
        cout << " ";
    }
}
void sinh()
{
    while (1)
    {
        vector<int> x;
        for (int j = 1; j <= n; j++)
            x.push_back(a[j]);
        vt.push_back(x);
        int i = n - 1;
        while (i > 0 && a[i] >= a[i + 1])
            i--;
        if (i == 0)
            return;
        int k = n;
        while (a[i] > a[k])
            k--;
        swap(a[i], a[k]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++, r--;
        }
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
        for (int i = 1; i <= n; i++)
            a[i] = i;
        sinh();
        print();
        cout << "\n";
        vt.clear();
    }
    return 0;
}
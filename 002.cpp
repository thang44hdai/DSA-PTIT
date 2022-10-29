#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n, k;
vector<vector<int>> kq;
vector<int> vt;
int a[50];
int check()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += vt[i] * a[i];
    if (sum == k)
        return 1;
    return 0;
}
void sol(int i)
{
    if (i == n)
    {
        if (check())
        {
            vector<int> b;
            for (int i = 0; i < n; i++)
                if (a[i])
                    b.push_back(vt[i]);
            kq.push_back(b);
        }
        return;
    }
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        sol(i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        vt.push_back(x);
    }
    sol(0);
    for (int i = 0; i <= kq.size() - 1; i++)
    {
        for (int j = 0; j < kq[i].size(); j++)
            cout << kq[i][j] << " ";
        cout << "\n";
    }
    cout << kq.size();
    return 0;
}
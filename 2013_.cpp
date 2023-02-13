#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int prime[230];
vector<int> a, vt;
vector<vector<int>> sol;
int s, p, n, len;
void Sang()
{
    for (int i = 2; i <= 15; i++)
        if (!prime[i])
            for (int j = i * i; j <= 200; j += i)
                prime[j] = 1;
}
void Try(int i = 0, int sum = 0)
{
    if (sum > s)
        return;
    if (vt.size() > n)
        return;
    if (sum == s and vt.size() == n)
    {
        sol.push_back(vt);
        return;
    }
    for (int j = i; j < len; j++)
    {
        vt.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        vt.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    Sang();
    while (t--)
    {
        cin >> n >> p >> s;
        a.clear();
        sol.clear();
        for (int i = p + 1; i <= s; i++)
            if (!prime[i])
                a.push_back(i);
        len = a.size();
        Try();
        cout << sol.size() << "\n";
        for (auto i : sol)
        {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}
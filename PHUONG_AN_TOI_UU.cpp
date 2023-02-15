#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, w;
int a[51], c[50];
int f[51];

int Max = INT_MIN;
vector<int> vt;

void sinh(int i = 1)
{
    if (i == n + 1)
    {
        int check = 0, sum = 0;
        for (int j = 1; j <= n; j++)
        {
            check += a[j] * f[j];
            sum += c[j] * f[j];
        }
        if (check <= w and sum > Max)
        {
            Max = sum;
            vt.clear();
            for (int j = 1; j <= n; j++)
                vt.push_back(f[j]);
        }
        return;
    }
    for (int j = 0; j <= 1; j++)
    {
        f[i] = j;
        sinh(i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("data.in", "r", stdin);
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sinh();
    cout << Max << "\n";
    for (auto i : vt)
        cout << i << " ";
    return 0;
}
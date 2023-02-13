#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;
int a[20];
vector<int> vt;
void Try(int i = 1)
{
    if (vt.size() == k)
    {
        for (auto i : vt)
            cout << i << " ";
        cout << "\n";
    }
    for (int j = i; j <= n; j++)
    {
        vt.push_back(a[j]);
        Try(j + 1);
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
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        Try();
    }

    return 0;
}
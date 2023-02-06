#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
int a[50];
int Count[50] = {};
vector<int> vt;
void Try()
{
    if (vt.size() == n)
    {
        for (auto i : vt)
            cout << i << " ";
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
        if (!Count[i])
        {
            vt.push_back(a[i]);
            Count[i] = 1;
            Try();
            vt.pop_back();
            Count[i] = 0;
        }
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    Try();

    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n], dem[99999] = {};
    for (auto &i : a)
    {
        cin >> i;
        dem[i]++;
    }
    for (auto i : a)
        if (dem[i] >= 1)
        {
            cout << i << " ";
            dem[i] = 0;
        }
    return 0;
}
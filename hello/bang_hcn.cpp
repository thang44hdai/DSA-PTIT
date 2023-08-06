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
    int min_x = 1e9, min_y = 1e9;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        min_x = min(x, min_x);
        min_y = min(y, min_y);
    }
    cout << min_x * min_y;
    return 0;
}

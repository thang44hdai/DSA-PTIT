#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n, m, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cnt = 0;
        for (auto &i : a)
        {
            cin >> i;
            if (!i)
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
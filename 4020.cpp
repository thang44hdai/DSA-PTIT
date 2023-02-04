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
        cin >> n >> k;
        int a[n];
        for (auto &i : a)
            cin >> i;
        int idx = lower_bound(a, a + n, k) - a;
        if (a[idx] == k)
            cout << idx + 1 << "\n";
        else
            cout << "NO"<< "\n";             
    }
    return 0;
}
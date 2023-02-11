#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, x;
bool cmp(int a, int b)
{
    return abs(a - x) < abs(b - x);
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
        cin >> n >> x;
        int a[n];
        for (auto &i : a)
            cin >> i;
        stable_sort(a, a + n, cmp);
        for (auto i : a)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
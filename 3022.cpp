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
    int a[n];
    for (auto &i : a)
        cin >> i;
    sort(a, a + n);
    int Max1, Max2;
    Max1 = a[n - 1] * a[n - 2] * a[n - 3];
    Max2 = a[0] * a[1] * a[n - 1];
    cout << max(Max1, Max2);
    return 0;
}
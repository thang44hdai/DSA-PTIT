#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    cin >> k;
    for (auto i : a)
        if (i != k)
            cout << i << " ";


    return 0;
}
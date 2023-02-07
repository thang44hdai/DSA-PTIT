#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        vector<ll> b;
        for (auto &i : a)
        {
            cin >> i;
            b.push_back(i);
        }
        sort(b.begin(), b.end());
        int l = 0, r = n - 1;
        while (a[l] == b[l])
            l++;
        while (a[r] == b[r])
            r--;
        cout << l + 1 << " " << r + 1 << "\n";
    }
    return 0;
}
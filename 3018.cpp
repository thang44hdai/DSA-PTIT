#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll n;
ll a[] = {7, 4};
vector<ll> vt;
bool check = false;
void Try(ll sum = 0)
{
    if (sum > n)
        return;
    if (sum == n)
    {
        check = true;
        sort(vt.begin(), vt.end());
        for (auto i : vt)
            cout << i;
        cout << "\n";
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        if (check)
            return;
        vt.push_back(a[i]);
        Try(sum + a[i]);
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
        check = false;
        cin >> n;
        Try();
        if (!check)
            cout << -1 << "\n";
    }

    return 0;
}
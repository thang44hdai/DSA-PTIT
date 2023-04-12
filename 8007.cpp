#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll n;
vector<ll> vt;
queue<ll> q;
void sinh()
{
    while (1)
    {
        ll top = q.front();
        q.pop();
        ll fi = top * 10;
        ll se = top * 10 + 1;
        q.push(fi);
        q.push(se);
        vt.push_back(fi);
        vt.push_back(se);
        if (se > n)
            return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    q.push(1);
    vt.push_back(1);
    while (t--)
    {
        cin >> n;
        sinh();
        int idx = upper_bound(vt.begin(), vt.end(), n) - vt.begin();
        cout << idx << "\n";
    }
    return 0;
}
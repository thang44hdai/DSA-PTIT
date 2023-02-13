#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<int> vt;
    while (t--)
    {
        cin >> n;
        priority_queue<ll, vector<ll>, greater<>> pq;
        while (n--)
        {
            ll x;
            cin >> x;
            pq.push(x);
        }
        ll total = 0;
        while (pq.size() > 1)
        {
            ll x = pq.top();
            pq.pop();
            total += x + pq.top();
            x += pq.top();
            pq.pop();
            pq.push(x);
        }
        cout << total << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll M = 1e9 + 7;
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
        ll a[n];
        priority_queue<ll, vector<ll>, greater<>> pq;
        while (n--)
        {
            ll x;
            cin >> x;
            pq.push(x);
        }
        ll sum = 0;
        while (pq.size() > 1)
        {
            ll top = pq.top() % M;
            pq.pop();
            top += pq.top() % M;
            top %= M;
            pq.pop();
            pq.push(top);
            sum += top;
            sum %= M;
        }
        cout << sum << "\n";
    }
    return 0;
}
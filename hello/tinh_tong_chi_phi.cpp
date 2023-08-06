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
    priority_queue<ll, vector<ll>, greater<>> pq;
    cin >> n >> k;
    ll sum = 0;
    ll x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum += x;
        pq.push(x);
    }
    ll chiphi = 0;
    while (pq.size() > 1)
    {
        int i = 1;
        ll y = 0;
        priority_queue<ll> pq1;
        priority_queue<ll, vector<ll>, greater<>> pq2;
        while (i <= k and pq.size())
        {
            pq1.push(pq.top());
            pq2.push(pq.top());
            y += pq.top();
            pq.pop();
            i++;
        }
        chiphi += pq1.top() - pq2.top();
        pq.push(y);
    }
    cout << pq.top()<<"\n" << chiphi;
    return 0;
}

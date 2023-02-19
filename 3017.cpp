#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

bool cmp(pair<char, ll> a, pair<char, ll> b)
{
    return a.second > b.second;
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int dd[500] = {};
        priority_queue<int> pq;
        for (auto i : s)
            dd[i]++;
        for (auto i : s)
            if (dd[i])
            {
                pq.push(dd[i]);
                dd[i] = 0;
            }
        while (n-- and pq.size())
        {
            int x = pq.top();
            pq.pop();
            x--;
            pq.push(x);
        }
        int sum = 0;
        while (pq.size())
        {
            int top = pq.top();
            pq.pop();
            sum += top * top;
        }
        cout << sum << "\n";
    }

    return 0;
}
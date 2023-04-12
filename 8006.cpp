#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll n;
vector<ll> vt;
void sinh()
{
    queue<ll> q;
    q.push(9);
    vt.push_back(9);
    while (1)
    {
        ll top = q.front();
        q.pop();
        q.push(top * 10);
        q.push(top * 10 + 9);
        vt.push_back(top * 10);
        vt.push_back(top * 10 + 9);
        if (vt.size() > 100000)
            return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i <= 100000; i++)
            if (vt[i] % n == 0)
            {
                cout << vt[i] << "\n";
                break;
            }
    }
    return 0;
}
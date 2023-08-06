#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define test() \
    int t;     \
    cin >> t;  \
    while (t--)
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
ll cacl2(ll n)
{
    int cnt = 0;

    while (n % 2 == 0)
    {
        n /= 2;
        cnt++;
    }
    return cnt;
}
ll cacl5(ll n)
{
    int cnt = 0;
    while (n % 5 == 0)
    {
        n /= 5;
        cnt++;
    }
    return cnt;
}
int main()
{
    faster() int n, k;
    cin >> n >> k;
    ll a[n + 5];
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back({cacl2(a[i]), cacl5(a[i])});
    }
    vector<pair<int, int>> record(n);
    int x = min(v[0].first, v[0].second);
    record[0].first = x;
    record[0].second = (x > 0) ? 1 : 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            
        }
    }
    cout << record[n - 1].first << endl;
    return 0;
}
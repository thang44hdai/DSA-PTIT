#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define bit(x, k) (((x) >> (k)) & 1ll)
#define on(x, k) ((x) | (1ll << (k)))
#define off(x, k) ((x) & (~(1ll << (k))))
#define ms(x, y) memset(x, y, sizeof(x))
const ll mod = 1e9 + 7;
const ll base = 31;
const ll maxn = 2e5 + 5;
int check(int mask)
{
    for (int i = 0; i < 4 - 1; i++)
    {
        if (bit(mask, i) && bit(mask, i + 1))
            return 0;
    }
    return 1;
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(1 << 4)), dp(n, vector<ll>(1 << 4));
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i][j];
        }
    }
    for (int mask = 0; mask < 1 << 4; mask++)
    {
        if (check(mask))
        {
            ll sum = 0;
            for (int i = 0; i < 4; i++)
            {
                sum += bit(mask, i) * a[0][i];
            }
            dp[0][mask] = sum;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int mask = 0; mask < 1 << 4; mask++)
        {
            if (check(mask))
            {
                ll sum = 0;
                for (int j = 0; j < 4; j++)
                {
                    sum += bit(mask, j) * a[i][j];
                }
                for (int pre_mask = 0; pre_mask < 1 << 4; pre_mask++)
                {
                    if (check(pre_mask))
                    {
                        if (mask & pre_mask)
                            continue;
                        dp[i][mask] = max(dp[i][mask], dp[i - 1][pre_mask] + sum);
                    }
                }
            }
        }
    }
    cout << *max_element(all(dp[n - 1])) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
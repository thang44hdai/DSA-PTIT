#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int prime[10005];
void Sang()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i <= 100; i++)
        if (!prime[i])
            for (int j = i * i; j <= 10000; j += i)
                prime[j] = 1;
}
int n;
int a[20];
vector<int> vt;
vector<vector<int>> ans;
void Try(int i = 1, int sum = 0)
{
    if (!prime[sum])
        ans.push_back(vt);

    for (int j = i; j <= n; j++)
    {
        vt.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        vt.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    Sang();
    while (T--)
    {
        cin >> n;
        ans.clear();
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1, greater<>());
        Try();
        sort(ans.begin(), ans.end());
        for (auto i : ans)
        {
            // sort(i.begin(), i.end(), greater<>());
            for (auto j : i)
                cout << j << ' ';
            cout << "\n";
        }
    }
    return 0;
}

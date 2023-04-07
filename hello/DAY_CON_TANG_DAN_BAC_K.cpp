#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;
int cnt = 0;
int a[105];
vector<int> vt;
void Try(int i = 1)
{
    if (vt.size() == k)
        cnt++;
    for (int j = i; j <= n; j++)
    {
        if (vt.empty() or a[j] > vt[vt.size() - 1])
        {
            vt.push_back(a[j]);
            Try(j + 1);
            vt.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try();
    cout << cnt;
    return 0;
}

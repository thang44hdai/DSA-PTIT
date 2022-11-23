#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n, k;
int ans[15];
void sinh()
{
    int a[n + 5];
    for (int i = 1; i <= k; i++)
        a[i] = i;
    int cnt = 1;
    while (1)
    {
        int idx = 1;
        while (a[idx] == ans[idx] and idx <= k)
            idx++;
        if (idx == k + 1)
        {
            cout << cnt << "\n";
            return;
        }
        cnt++;
        int i = k;
        while (i and a[i] >= n - k + i)
            i--;
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[i] + j - i;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> ans[i];
        sinh();
    }
    return 0;
}
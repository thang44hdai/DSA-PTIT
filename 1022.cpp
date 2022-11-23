#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n;
int ans[15];
void sinh()
{
    int a[n + 5];
    for (int i = 1; i <= n; i++)
        a[i] = i;
    int cnt = 1;
    while (1)
    {
        int idx = 1;
        while (a[idx] == ans[idx] and idx <= n)
            idx++;
        if (idx == n + 1)
        {
            cout << cnt << "\n";
            return;
        }
        cnt++;
        int i = n - 1;
        while (i and a[i] >= a[i + 1])
            i--;
        int k = n;
        while (a[i] > a[k])
            k--;
        swap(a[i], a[k]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++, r--;
        }
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
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> ans[i];
        sinh();
    }
    return 0;
}
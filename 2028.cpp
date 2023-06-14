#include <bits/stdc++.h>
using namespace std;

int n, k;
int sum = 0;
int a[15];
int ans = 0;
void Try(int i = 0, int total = 0, int cnt = 0)
{
    if (i == n and cnt == k)
    {
        ans++;
        return;
    }
    for (int j = i; j < n; j++)
    {
        total += a[j];
        if (total == sum)
            Try(j + 1, 0, cnt + 1);
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % k)
        cout << 0;
    else
    {
        sum /= k;
        Try();
        cout << ans;
    }
    return 0;
}
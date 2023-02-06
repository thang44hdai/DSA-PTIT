#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
int a[55], b[55], c[55];
int cnt = 0;
void Try(int i = 1)
{
    if (i == n + 1)
    {
        cnt++;
        return;
    }
    for (int j = 1; j <= n; j++) // xét các hàng
    {
        if (!a[j] and !b[i + j - 1] and !c[i - j + n])
        {
            a[j] = b[i + j - 1] = c[i - j + n] = 1;
            Try(i + 1);
            a[j] = b[i + j - 1] = c[i - j + n] = 0;
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
        cnt = 0;
        Try();
        cout << cnt << "\n";
    }
    return 0;
}
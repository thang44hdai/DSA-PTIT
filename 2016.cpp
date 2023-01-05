#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
int a[15], b[15]; // 2 mảng chứa 2 đường chéo
int x[15];        // x[i]=j là con hậu ở hàng i cột j
int cnt = 0;
void Try(int i = 1)
{
    for (int j = 1; j <= n; j++) // xét các cột
    {
        if (x[j] == 0 and a[i + j - 1] == 0 and b[i - j + n] == 0)
        {
            x[j] = a[i + j - 1] = b[i - j + n] = 1;
            if (i == n)
                cnt++;
            else
                Try(i + 1);
            x[j] = a[i + j - 1] = b[i - j + n] = 0;
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
        fill(x, x + 15, 0);
        fill(a, a + 15, 0);
        fill(b, b + 15, 0);
        cin >> n;
        cnt = 0;
        Try();
        cout << cnt << "\n";
    }
    return 0;
}
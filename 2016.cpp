#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
int a[50], b[50], c[50];
int cnt = 0;
void Try(int i = 1)
{
    for (int j = 1; j <= n; j++)
    {
        if (!a[j] and !b[i + j - 1] and !c[i - j + n])
        {
            a[j] = b[i + j - 1] = c[i - j + n] = 1;
            if (i == n)
                cnt++;
            else
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
        Try();
        cout << cnt << "\n";
    }
    return 0;
}
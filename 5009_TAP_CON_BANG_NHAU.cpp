#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int n;
ll sum, half_sum;
int a[105];
bool check = false;
void Try(int i = 1, ll x = 0)
{
    if (x > half_sum)
        return;
    if (x == half_sum)
    {
        check = true;
        cout << "YES"
             << "\n";
        return;
    }
    for (int j = i; j <= n; j++)
        if (check == true)
            return;
        else
            Try(j + 1, x + a[j]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0, check = false;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2)
            cout << "NO"
                 << "\n";
        else
        {
            half_sum = sum / 2;
            Try();
            if (!check)
                cout << "NO"
                     << "\n";
        }
    }
    return 0;
}
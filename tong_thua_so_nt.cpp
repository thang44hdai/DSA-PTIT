#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int f[100001] = {};
void sang()
{
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 1e5; i++)
        if (f[i] == 0)
            for (int j = i * i; j <= 1e5; j += i)
                f[j] = 1;
}

int ans(int n)
{
    int num=0, sqr = sqrt(n);
    for (int i = 1; i <= sqr; i++)
        if (n % i == 0)
        {
            if (f[n / i] == 0)
                return n / i;
            else if (f[i] == 0)
                num = i;
        }
    return num;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sang();
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        ll sum = 0;
        for (int i = l; i <= r; i++)
            sum += 1LL*ans(i);
        cout << sum << "\n";
    }
    return 0;
}
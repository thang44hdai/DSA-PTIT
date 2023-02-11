#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;
int prime[1000005];
void init()
{
    prime[1] = 1;
    for (int i = 2; i <= 1000; i++)
        if (!prime[i])
            for (int j = i * i; j <= 1000000; j += i)
                prime[j] = 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    init();
    while (t--)
    {
        cin >> n;
        bool check = true;
        for (int i = 2; i <= n / 2; i++)
            if (!prime[i] and !prime[n - i])
            {
                cout << i << " " << n - i << "\n", check = false;
                break;
            }
        if (check)
            cout << -1 << "\n";
    }
    return 0;
}
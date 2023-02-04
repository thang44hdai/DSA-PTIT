#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll fi[93];
ll n, i;
void init()
{
    fi[1] = 1;
    fi[2] = 1;
    for (int i = 3; i <= 92; i++)
        fi[i] = fi[i - 1] + fi[i - 2];
}
void sol()
{
    if (n == 1)
    {
        // cout<<".";
        cout << 'A' << "\n";
        return;
    }
    if (n == 2)
    {
        // cout<<",";
        cout << 'B' << "\n";
        return;
    }
    if (i > fi[n - 2])
    {
        i -= fi[n - 2];
        n--;
        sol();
    }
    else
    {
        n -= 2;
        sol();
    }
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
        cin >> n >> i;
        sol();
    }
    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

ll c[105] = {};
void init()
{
    c[0] = 1;
    c[1] = 1;
    c[2] = 2;
    for (int i = 3; i <= 100; i++)
        for (int j = 0; j < i; j++)
            c[i] += c[j] * c[i - j - 1];
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
        int n;
        cin >> n;
        cout << c[n] << "\n";
    }
    return 0;
}
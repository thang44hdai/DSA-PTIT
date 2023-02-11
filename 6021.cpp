#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int m;
        for (int i = 1; i <= n; i++)
        {
            cin >> m;
            if (m == k)
                cout << i << "\n";  
        }
    }
    return 0;
}
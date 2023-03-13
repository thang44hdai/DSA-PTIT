#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int &i : a)
            cin >> i;
        sort(a, a + n);
        int ok[n] = {};
        int cnt = n;
        for (int i = 0; i < n / 2; i++)
        {
            int j = n / 2;
            while ((ok[j] == 1 or a[j] < a[i] * 2) and j < n)
                j++;
            if (j < n)
            {
                ok[j] = 1;
                cnt--;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
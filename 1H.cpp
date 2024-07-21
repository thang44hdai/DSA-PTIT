#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int sol(int a[], int n)
{
    int Max = 0;
    for (int i = 0; i < n; i++)
        Max = max(Max, a[i]);

    int mp[Max + 1] = {0};

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    for (int i = Max; i >= 1; i--)
    {
        int tmp = i;
        int cnt = 0;
        while (tmp <= Max)
        {
            if (mp[tmp] >= 2)
                return tmp;
            if (mp[tmp] == 1)
                cnt++;
            if (cnt == 2)
                return i;
            tmp += i;
        }
    }

    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << sol(a, n) << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int sol(int a[], int n)
{
    int Max = 0;
    for (int i = 0; i < n; i++)
        Max = max(Max, a[i]);

    map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    for (int i = 0; i < n; i++)
        if (mp[a[i]] >= 2)
            return a[i];

    for (int i = Max; i >= 1; i--)
    {
        int tmp = i;
        int cnt = 0;
        while (tmp <= Max)
        {
            if (mp[tmp] == 1)
                cnt++;
            if (cnt == 2)
                return i;
            tmp += i;
        }
    }

    return 1;
}

int findMaxGCD(int arr[], int n)
{
    int high = 0;
    for (int i = 0; i < n; i++)
        high = max(high, arr[i]);
    map<int, int> count;
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    int counter = 0;
    for (int i = high; i >= 1; i--)
    {
        int j = i;
        counter = 0;
        while (j <= high)
        {
            if (count[j] >= 2)
                return j;
            else if (count[j] == 1)
                counter++;
            j += i;
            if (counter == 2)
                return i;
        }
    }
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

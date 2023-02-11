#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    for (int i = 1; i <= n; i++)
    {
        bool check = true;
        for (int j = 0; j < n - i; j++)
            if (a[j] > a[j + 1])
            {
                check = false;
                swap(a[j], a[j + 1]);
            }
        if (check)
            break;
        cout << "Buoc " << i << ": ";
        for (auto j : a)
            cout << j << " ";
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Buoc " << i + 1 << ": ";
        int idx = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[idx])
                idx = j;
        swap(a[i], a[idx]);
        for (auto j : a)
            cout << j << " ";
        cout << endl;
    }
}
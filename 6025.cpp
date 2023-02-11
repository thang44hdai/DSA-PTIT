#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n ; i++)
    {
        cout << "Buoc " << i << ": ";
        int j = i;
        while (j and a[j] < a[j - 1])
        {
            swap(a[j], a[j - 1]);
            j--;
        }
        for (int k = 0; k <= i; k++)
            cout << a[k] << " ";
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> vt;
        for (int &i : a)
            cin >> i;
        int x = min_element(a, a + n - 1) - a;
        int y = max_element(a, a + n - 1) - a;
        for (int i = x; i <= y; i++)
            vt.push_back(i + 1);
        cout << vt.size() << "\n";
        for (auto i : vt)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
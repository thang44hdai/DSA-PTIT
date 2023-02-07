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
        cin >> n >> m;
        int a[n], b[m];
        map<int, int> mp1, mp2;
        set<int> st;
        for (auto &i : a)
        {
            cin >> i;
            mp1[i]++;
            st.insert(i);
        }
        for (auto &i : b)
        {
            cin >> i;
            mp2[i]++;
            st.insert(i);
        }
        for (auto i : st)
            cout << i << " ";
        cout << "\n";
        for (auto i : a)
            if (mp2[i])
                cout << i << " ";
        cout << "\n";
    }
    return 0;
}
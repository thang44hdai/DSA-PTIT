#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
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
        for (int &i : a)
            cin >> i;
        stack<pair<int, int>> st;
        vector<int> vt;
        vt.push_back(1);
        st.push({a[0], 1});
        for (int i = 1; i < n; i++)
        {
            while (st.size() and a[i] >= st.top().first)
                st.pop();
            if (st.size())
                vt.push_back(i + 1 - st.top().second);
            else
                vt.push_back(i + 1);
            st.push({a[i], i + 1});
        }
        for (auto i : vt)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
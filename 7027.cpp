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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        stack<int> st;
        vector<int> vt, ans;
        vt.push_back(-1);
        st.push(a[n]);
        for (int i = n - 1; i >= 1; i--)
        {
            while (st.size() and a[i] >= st.top())
                st.pop();
            if (st.empty())
                vt.push_back(-1);
            else
                vt.push_back(st.top());
            st.push(a[i]);
        }
        reverse(vt.begin(), vt.end());
        for (auto i : vt)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
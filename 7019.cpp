#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n;
ll sol(int M[])
{
    stack<int> st;
    int i = 0;
    ll res = 0;
    while (i < n)
    {
        if (st.size() == 0 || M[i] > M[st.top()])
            st.push(i++);
        else
        {
            int x = st.top();
            st.pop();
            if (st.size() == 0)
                res = max(res, (ll)i * M[x]);
            else
                res = max(res, (ll)M[x] * (i - st.top() - 1));
        }
    }
    while (st.size())
    {
        int x = st.top();
        st.pop();
        if (st.size() == 0)
            res = max(res, (ll)i * M[x]);
        else
            res = max(res, (ll)M[x] * (i - st.top() - 1));
    }
    return res;
}
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
        int M[n];
        for (int i = 0; i < n; i++)
            cin >> M[i];
        cout << sol(M) << "\n";
    }

    return 0;
}
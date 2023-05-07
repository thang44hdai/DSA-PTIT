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
        stack<int> st;
        int cnt[n];
        for (int i = 0; i < n; i++)
        {
            if (st.size() and a[i] < a[st.top()])
                cnt[i] = i - 1;
            else
            {
                while (st.size() and a[i] >= a[st.top()])
                    st.pop();
                if (st.empty())
                    cnt[i] = -1;
                else
                    cnt[i] = st.top();
            }
            st.push(i);
        }
        for (int i = 0; i < n; i++)
            cout << i - cnt[i] << " ";
        cout << "\n";
    }
    return 0;
}
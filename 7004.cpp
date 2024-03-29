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
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for (auto i : s)
        {
            if (i == '(')
                st.push(i);
            else
            {
                if (st.size())
                    st.pop();
                else
                {
                    st.push('(');
                    cnt++;
                }
            }
        }
        cout << cnt + st.size() / 2 << "\n";
    }

    return 0;
}
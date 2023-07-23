#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    int ans = 0;
    for (auto i : s)
    {
        if (i == '(' or i == '[')
            st.push(i);
        else
        {
            if (st.size())
            {
                if (st.top() == '(')
                {
                    if (i == ')')
                        st.pop();
                    else
                    {
                        cnt = 0;
                        while (st.size())
                            st.pop();
                    }
                }
                else if (st.top() == '[')
                {
                    if (i == ']')
                    {
                        cnt++;
                        st.pop();
                    }
                    else
                    {
                        cnt = 0;
                        while (st.size())
                        {
                            st.pop();
                        }
                    }
                }
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}
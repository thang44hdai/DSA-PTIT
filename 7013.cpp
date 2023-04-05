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
        int n = s.length();
        stack<int> st;
        for (int i = 0; i < n; i++)
            if (isdigit(s[i]))
                st.push(s[i] - '0');
            else
            {
                int x = st.top();
                if (st.size())
                    st.pop();
                int y = st.top();
                if (st.size())
                    st.pop();
                int num;
                if (s[i] == '+')
                    num = x + y;
                else if (s[i] == '-')
                    num = y - x;
                else if (s[i] == '*')
                    num = x * y;
                else if (s[i] == '/')
                    num = y / x;
                st.push(num);
            }
        cout << st.top() << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for (char i : s)
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
}
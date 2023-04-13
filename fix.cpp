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
        stack<string> st;
        for (char i : s)
        {
            if (i == '(')
                st.push(string(1, i));
            else if (i == ')')
            {
                if (st.size() >= 2)
                {
                    string fi = st.top();
                    st.pop();
                    string se = st.top();
                    st.pop();
                    string tmp = "0" + fi + "1";
                    st.push(tmp);
                }
                else
                {
                    string fi = st.top();
                    st.pop();
                    st.push(fi + "-1");
                }
            }
            else
            {
                string tmp = string(1, i);
                while (st.size() and st.top() != "(")
                {
                    tmp += st.top();
                    st.pop();
                }
                st.push(tmp);
            }
        }
        for (int i = 1; i < st.size(); i++)
            cout << "-1";
        cout << st.top() << "\n";
    }
    return 0;
}
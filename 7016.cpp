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
        int num = 2;
        stack<int> st;
        st.push(1);
        for (char i : s)
        {
            if (i == 'D')
                st.push(num);
            else
            {
                while (st.size())
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(num);
            }
            num++;
        }
        while (st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
    return 0;
}
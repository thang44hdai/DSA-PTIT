#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stack<int> st;
        vector<int> vt;
        int cnt = 1;
        for (char i : s)
        {
            if (i == '(')
            {
                st.push(cnt);
                vt.push_back(cnt);
                cnt++;
            }
            else if (i == ')')
            {
                vt.push_back(st.top());
                st.pop();
            }
        }
        for (auto i : vt)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
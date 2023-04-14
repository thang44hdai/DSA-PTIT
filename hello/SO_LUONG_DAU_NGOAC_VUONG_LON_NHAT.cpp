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
    int cnt = 0, res = 0;
    stack<pair<char, int>> st;
    st.push({'*', 0});
    for (char &i : s)
    {
        if (st.size() && ((i == ')' && st.top().first == '(') || (i == ']' && st.top().first == '[')))
        {
            st.pop();
            if (st.size())
                res = max(res, cnt - st.top().second);
        }
        else
        {
            cnt += i == '[';
            st.push({i, cnt});
        }
    }
    cout << res;

    return 0;
}
#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        stack<int> st;
        int res = 0;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '[')
                st.push(i);
            else
            {
                if (st.size())
                    st.pop();
                else
                {
                    int j = i;
                    while (s[j] == ']')
                        j++;
                    swap(s[i], s[j]);
                    res += j - i;
                    st.push(i);
                }
            }
        cout << res << "\n";
    }
    return 0;
}
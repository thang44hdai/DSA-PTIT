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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        stack<string> st;
        while (ss >> s)
            st.push(s);
        while (st.size())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
    return 0;
}
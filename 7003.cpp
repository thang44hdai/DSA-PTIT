#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

string s;
int n;
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
        getline(cin, s);
        stack<char> st;
        n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ')')
                st.push(s[i]);
            else
            {
                bool check = true;
                
            }
        }
        cout << "\n";
    }

    return 0;
}
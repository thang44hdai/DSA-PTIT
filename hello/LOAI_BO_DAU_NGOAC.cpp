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
        stack<char> dau_tru, dau_ngoac; //  để check
        vector<char> vt;                // để lưu kết quả
        for (char i : s)
        {
            if (i == ' ')
                continue;
            if (i == '(')
            {
                if (dau_tru.size())
                {
                    dau_ngoac.push(i);
                    dau_tru.pop();
                    vt.push_back(i);
                }
            }
            else if (i == ')')
            {
                if (dau_ngoac.size())
                {
                    dau_ngoac.pop();
                    vt.push_back(i);
                }
                while (dau_tru.size())
                    dau_tru.pop();
            }
            else if (i == '+' or i == '-')
            {
                if (i == '-')
                    dau_tru.push(i);
                vt.push_back(i);
            }
            else
                vt.push_back(i);
        }
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i] == ' ')
                continue;
            if (vt[i] == '(' and vt[i + 2] == ')')
                vt[i + 2] = ' ';
            else
                cout << vt[i];
        }
        cout << "\n";
    }
    return 0;
}
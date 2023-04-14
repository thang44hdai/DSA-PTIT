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
        stack<char> tru, cong, dau_ngoac; //  để check
        vector<char> kq;                  // để lưu kết quả
        for (char i : s)
        {
            if (i == ' ')
                continue;
            if (i == '(')
            {
                if (tru.size())
                {
                    dau_ngoac.push(i);
                    kq.push_back(i);
                }
            }
            else if (i == ')')
            {
                if (dau_ngoac.size())
                {
                    kq.push_back(i);
                    dau_ngoac.pop();
                }
            }
            else if (i == '+')
            {
                kq.push_back(i);
                cong.push(i);
            }
            else if (i == '-')
            {
                tru.push(i);
                kq.push_back(i);
            }
            else
                kq.push_back(i);
        }
        
    }
    return 0;
}
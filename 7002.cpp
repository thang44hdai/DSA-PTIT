#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<int> vt;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s == "PRINT")
        {
            if (vt.empty())
                cout << "NONE";
            else
                cout << vt[vt.size() - 1];
            cout << "\n";
        }
        else if (s == "POP")
        {
            if (vt.size())
                vt.pop_back();
        }
        else
        {
            string a = s.substr(5);
            vt.push_back(stoi(a));
        }
    }

    return 0;
}
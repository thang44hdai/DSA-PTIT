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
    string s;
    vector<int> vt;
    while (getline(cin, s))
    {
        if (s == "show")
        {
            for (auto i : vt)
                cout << i << " ";
            if (vt.empty())
                cout << "empty";
            cout << "\n";
        }
        else if (s == "pop")
            vt.pop_back();
        else
        {
            string a = s.substr(5);
            vt.push_back(stoi(a));
        }
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();
    string s[n];
    for (int i = 0; i < n; i++)
        getline(cin, s[i]);
    map<string, int> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        if (!i or s[i - 1] == "")
        {
            v.push_back(s[i]);
            int tmp = i + 1;
            while (s[tmp] != "" and tmp < n)
            {
                m[s[i]]++;
                tmp++;
            }
            if (i + 1 != tmp)
                i = tmp;
        }
    }
    for (auto j : v)
        for (auto i : m)
        {
            if (i.first == j)
            {
                cout << i.first << ": " << i.second << endl;
                break;
            }
        }

    return 0;
}
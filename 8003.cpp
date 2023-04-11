#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    deque<int> dq;
    int n;
    cin >> n;
    string s;
    int x;
    while (n--)
    {
        cin >> s;
        if (s == "PUSHBACK")
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PUSHFRONT")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (dq.size())
                cout << dq.front();
            else
                cout << "NONE";
            cout << "\n";
        }
        else if (s == "PRINTBACK")
        {
            if (dq.size())
                cout << dq.back();
            else
                cout << "NONE";
            cout << "\n";
        }
        else if (s == "POPBACK")
        {
            if (dq.size())
                dq.pop_back();
        }
        else if (s == "POPFRONT")
        {
            if (dq.size())
                dq.pop_front();
        }
    }
    return 0;
}
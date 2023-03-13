#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
vector<string> ans;
void sinh()
{
    queue<string> q;
    q.push("6");
    q.push("8");
    while (q.size())
    {
        string top = q.front();
        q.pop();
        ans.push_back(top);
        q.push(top + "6");
        q.push(top + "8");
        if (top.length() == 15)
            return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sinh();

    while (t--)
    {
        cin >> n;
        vector<string> sol;
        for (auto i : ans)
            if (i.length() > n)
                break;
            else
                sol.push_back(i);
        cout << sol.size() << "\n";
        
        for (auto i : sol)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
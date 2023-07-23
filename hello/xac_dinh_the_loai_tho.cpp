#include <bits/stdc++.h>
#define ll long long
using namespace std;

int soTu(string s)
{
    int ans = 0;
    string s1;
    stringstream ss(s);
    while (ss >> s1)
        ans++;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    string s[n + 6];
    cin.ignore();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (soTu(s[i]) == 7)
        {
            ans.push_back(2);
            i += 3;
        }
        else
        {
            ans.push_back(1);
            while (soTu(s[i]) != 7 && i < n)
                i++;
            i--;
        }
    }
    cout << ans.size() << endl;
    for (int i : ans)
        cout << i << endl;
    return 0;
}
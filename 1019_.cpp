#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n;
string s;
vector<string> vt;
char a[2] = {'H', 'A'};
void check()
{
    // s.find() trong terminal khi không thấy chuỗi cần tìm thì trả về 4294967295 nhưng thực chất là -1 nha. 
    if (s[0] == 'H' and s[n - 1] == 'A' and s.find("HH") == -1)
        vt.push_back(s);
}
void sinh()
{
    if (s.size() == n)
    {
        check();
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        s += a[i];
        sinh();
        s.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s = "";
        sinh();
        sort(vt.begin(), vt.end());
        for (auto i : vt)
            cout << i << "\n";
        vt.clear();
    }
    return 0;
}
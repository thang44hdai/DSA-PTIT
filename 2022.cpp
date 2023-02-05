#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

string d[] = {"02", "20", "22"};
string s = "2";
string f[] = {"0", "2"};
set<string> st;
void Try(int i=0)
{
    if (s.length() == 4)
    {
        string a = d[i] + "/02/" + s;
        st.insert(a);
        return;
    }
    for (int x = i; x <= 2; x++)
        for (int y = 0; y <= 1; y++)
        {
            s += f[y];
            Try(x);
            s.pop_back();
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Try();
    for (auto i : st)
        cout << i << "\n";
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int lv, bonus;
void sol(string id)
{
    string x = id.substr(0, 2);
    string y = id.substr(2, 2);
    if (x == "HT")
        bonus = 2000000;
    else if (x == "HP")
        bonus = 900000;
    else
        bonus = 500000;
    lv = stoi(y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string id, name;
    int salary;
    cin >> id;
    cin.ignore();
    getline(cin, name);
    cin >> salary;
    sol(id);
    cout << id << " " << name << " " << lv << " " << bonus << " " << salary * lv + bonus;
    return 0;
}
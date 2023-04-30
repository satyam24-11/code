#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string s;
    cin >> s;
    unordered_set<char> s1;
    for (int i = 0; i < s.length(); i++)
    {
        s1.insert(s[i]);
    }
    int b = s1.size();
    if (b & 1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
        cout << "CHAT WITH HER!" << endl;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    //{
    solution();
    // }
    return 0;
}
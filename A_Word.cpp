#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (char i : s)
    {
        if ('a' <= i && i <= 'z')
            ++cnt;
    }
    if (cnt >= s.size() - cnt)
    {
        for (char &i : s)
            i = tolower(i);
    }
    else
    {
        for (char &i : s)
            i = toupper(i);
    }
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solution();
    // }
    return 0;
}
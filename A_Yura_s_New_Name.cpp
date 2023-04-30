#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
    int t, a = 0, b;
    string s;

    cin >> s;
    a = 0;
    if (s[0] == '_')
        a = 1;
    if (s.size() == 1 && s[0] == '^')
        a = 1;
    for (int j = 0; j < s.size(); j++)
    {
        if (s[j] == '_' && s[j + 1] != '^')
            a++;
    }
    cout << a << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}

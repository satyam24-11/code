#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m1;
    for (int i = 0; i < s.length(); i++)
    {
        if (m1.find(s[i]) == m1.end())
        {
            m1[s[i]] = i;
        }
        else
        {
            int minus = 1 - 1 + i - m1[s[i]];
            if (minus % 2 != 0)
            {
                cout << "NO" << endl;
                return;
            }
            m1[s[i]] = i;
        }
    }
    cout << "YES" << endl;
}

int main()
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


#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll n = s1.size(), m = s2.size();
    if (n == 1 && m == 1)
    {
        if (s1 == s2)
        {
            cout << "YES" << endl;
            cout << s1 << endl;
            return;
        }
        cout << "NO" << endl;
        return;
    }
    if (s1[0] == s2[0] || s1[n - 1] == s2[m - 1])
    {
        cout << "YES" << endl;
        if (s1[0] == s2[0])
            cout << s1[0] << "*" << endl;
        else
            cout << "*" << s1[n - 1] << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s1[i] == s2[j])
            {
                if (i < n - 1 && j < m - 1)
                {
                    if (s1[i + 1] == s2[j + 1])
                    {
                        cout << "YES" << endl;
                        cout << "*" << s1[i] << s1[i + 1] << "*" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
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
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            v.push_back(i);
        }
    }
    if (v.size() > 0)
    {
        for (int i = v[0]; i <= v[v.size() - 1]; i++)
        {
            s[i] = ('0') + '1' - s[i];
        }
    }
    int flag = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            flag = 0;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
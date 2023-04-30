#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string right = "";
    for (int i = 0; i <= 150; i++)
    {
        if (i % 3 == 0)
        {
            right += 'F';
        }
        if (i % 5 == 0)
        {
            right += 'B';
        }
    }
    for (int i = 0; i + n < right.length(); i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (right[i + j] != s[j])
                flag = false;
        }
        if (flag)
        {

            cout << "YES" << endl;
            return;
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
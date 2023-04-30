#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
    {
        cout << "+" << endl;
    }
    else
        cout << "-" << endl;
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
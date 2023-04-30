#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    int n, x = 0;
    cin >> n;
    while (n--)
    {
        string y;
        cin >> y;
        if (y == "++X" || y == "X++")
        {
            x++;
        }
        else
            x--;
    }
    cout << x << endl;
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
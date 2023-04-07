#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    int n;
    cin >> n;
    int a, b, c;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        count += (a + b + c) >= 2;
    }
    cout << count << endl;
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
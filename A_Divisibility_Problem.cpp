#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void answer()
{   
    int t,a,b;
    cin >> t;
    while (cin >> a >> b)
        cout << (a % b ? b - a % b : 0) << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        answer();
    // }
    return 0;
}

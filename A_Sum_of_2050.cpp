#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n;
    int ans = 0;
    cin >> n;
    while (n >= 2050)
    {
        ans++;
        int x = 2050;
        while (x <= n)
        {
            x *= 10;
        }
        x /= 10;
        n -= x;
    }
    if (n != 0)
        cout << "-1" << endl;
    else
        cout << ans << endl;
}

int32_t main()
{
    make_fast;
    int t;
    cin >> t;
    while (t--)
    {
        answer();
    }
    return 0;
}
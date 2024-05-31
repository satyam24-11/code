#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int p, q, n, a;
    cin >> p >> q >> n;
    while (n)
    {
        cin >> a;
        if (q == 0 || a > p / q)
            break;
        int t = q;
        q = p - q * a;
        p = t;
        n--;
    }
    if (n || q)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int32_t main()
{
    make_fast;
    // int t;
    // cin >> t;
    // while (t--)
    // {
         answer();
    // }
    return 0;
}
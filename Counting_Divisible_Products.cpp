#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
int mul(int n)
{
    int prod = 1;
    int r;
    while (n != 0)
    {
        r = n % 10;
        prod = (prod * r) % mod;
        n = n / 10;
    }
    return prod % mod;
}
void answer()
{
    int l, r, p;
    cin >> l >> r >> p;
    int res = 0;
    int cnt = 0;
    for (int i = l; i <= r; i++)
    {
        res = mul(i);
        if (res % p == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
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
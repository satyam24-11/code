#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, x, l, r;
    cin >> n >> x;
    int start = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        while (l - start >= x)
        {
            start += x;
        }
        sum += r - start + 1;
        start = r + 1;
    }
    cout << sum;
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
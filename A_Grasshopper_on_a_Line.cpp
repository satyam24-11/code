#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int x, k;
    cin >> x >> k;
    if (x % k == 0)
    {
        cout << "2\n"
             << x + 1 << " " << -1 << endl;
    }
    else
        cout << "1\n"
             << x << endl;
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
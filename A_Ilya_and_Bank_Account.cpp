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
    cin >> n;
    int max = n;

    if (n / 10 > max)
    {
        max = n / 10;
    }

    if (n % 10 + (n / 100) * 10 > max)
    {
        max = n % 10 + (n / 100) * 10;
    }

    cout << max;
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
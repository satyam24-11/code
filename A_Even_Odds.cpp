#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,k;
    cin >> n >> k;
    n = k - (n+1) / 2;
   // cout << n << endl;
    cout << (n > 0 ? 2 * n : 2 * k - 1);
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

 
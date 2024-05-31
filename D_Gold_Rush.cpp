#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;

bool flag(int n, int m)
{
    if (n-m==0)
    {
        return 1;
    }
    if (m > n || n % 3 != 0)
    {
        return 0;
    }
   
    return flag(n / 3, m) || flag(2 * n / 3, m);
}

void answer()
{
    int n, m;
    cin >> n >> m;
    if (flag(n, m))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
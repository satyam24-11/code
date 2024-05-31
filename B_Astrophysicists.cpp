#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
  
}

int32_t main()
{
    make_fast;
    int t;
    cin >> t;
    while (t--)
    {
        // answer();
        int n, k, g;
        cin >> n >> k >> g;
        int fs = k * g;
        int sec = (((g + 1) / 2) - 1);
        if (fs - sec * n < 0)
        {
            cout << k * g << endl;
            continue;
        }
        cout << fs - ((((fs - sec * n + g - 1) / g) * g)) << endl;
    }
    return 0;
}
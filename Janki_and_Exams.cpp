
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int x, y, z;
    cin >> x >> y >> z;
    int avg = ((x + y + z) / 100 )*3*100;
    if (avg > 30)
    {
        cout << "PASS" << endl;
    }
    else
        cout << "FAIL" << endl;
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
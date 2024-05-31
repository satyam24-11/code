#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
std::cin.tie(NULL);
const int mod = 1000000007;
bool contain_eight(int n)
{
    while (n)
    {
        int rem = n % 10;
        if (rem == 8)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}
void answer()
{
    int n;
    cin >> n;
    int count = 0;
    while (1)
    {
        n++;
        count++;
        if (contain_eight(abs(n)))
        {
            cout << count << endl;
            return;
        }
    }
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
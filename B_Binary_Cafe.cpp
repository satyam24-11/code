#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
int convert_binary(int n)
{
    long long bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}
int convert(int n)
{
    int ans = 0, i = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem)
        {
            ans += pow(2, i);
        }
        n = n / 10;
        i++;
    }
    return ans;
}
void answer()
{
    int n, k;
    cin >> n >> k;
    int f = convert_binary(n);
    int s = convert_binary(k);
    if (n == k)
    {
        cout << n + 1 << endl;
    }
    else
    {
        int y = f | s;
        int ans = convert(y);
        cout << y << endl;
    }
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

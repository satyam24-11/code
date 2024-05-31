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
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = INT_MAX;
    for (int pos = 1; pos <= n; pos++)
    {
        long long prev = 0, sum = 0;
        for (int i = pos - 1; i >= 1; i--)
        {
            prev += a[i] - prev % a[i];
            sum += prev / a[i];
        }
        prev = 0;
        for (int i = pos + 1; i <= n; i++)
        {
            prev += a[i] - prev % a[i];
            sum += prev / a[i];
        }
        ans = min(ans, sum);
    }
    cout << ans << "\n";
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
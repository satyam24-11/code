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
        int ans = 0;
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (i < n && a[i] == 0)
        {
            i++;
        }
        for (int j = i; j < n - 1; j++)
        {
            ans += a[j];
            if (a[j] == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
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
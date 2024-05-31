#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0;
    int r=1e9;
    int ans = 0;
    while (l <= r)
    {
        int mid = l+(r-l) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < mid)
                sum +=  mid-v[i];
        }
        if (sum <= m)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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
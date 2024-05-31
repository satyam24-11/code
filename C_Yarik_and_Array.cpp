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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
int ans = v[0];
int mn = min((int)0, v[0]);
int sum = v[0];
for (int i = 1; i < n; ++i)
{
    if (abs(v[i] % 2) == abs(v[i - 1] % 2))
    {
        mn = 0;
        sum = 0;
    }
    sum += v[i];
    ans = max(ans, sum - mn);
    mn = min(mn, sum);
}
cout << ans << endl;

// cout << ans << endl;
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
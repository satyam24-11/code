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
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x, x & 1 ? odd.push_back(x) : even.push_back(x);
    }
    bool ok = is_sorted(even.begin(), even.end()) && is_sorted(odd.begin(), odd.end());
    ok ? cout << "YES\n" : cout << "NO\n";
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
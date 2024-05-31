#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int len;
    cin >> len;
    vector<int> v(len + 1, 0);
    cout << 1 << " ";
    for (int c = 2; c <= len; c++)
    {
        int idx_cur = c;
        while (idx_cur <= len && !v[idx_cur])
        {
            cout << idx_cur << " ";
            v[idx_cur] = 1;
            idx_cur *= 2;
        }
    }
    cout << endl;
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
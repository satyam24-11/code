#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,x;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n - 1;i++){
        cin >> x;
        sum += x;
    }
    int total_sum = n * (n + 1) / 2;
    cout << total_sum - sum << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < n;i++){
        int diff = abs(v[i] - H);
        if ( diff>0&&diff / k <= m - 1 && diff%k==0){
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
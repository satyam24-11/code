#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n+1);
   // v[0] = 0;
    for (int i = 1; i <= n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++){
         v[i+1] += v[i];
    }
    for (int i = 0; i <=k; i++){
     ans = max(ans, v[n - i] - v[2*(k-i)]);
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    vector<int> v;
    int y, k, n;
    cin >> y >> k >> n;
    int x = k-(y % k);
    int z = ceil(ceil(n-y) / k);
    //cout << z << " ";
    if (y >= n || x + y > n)
    {
        cout << -1 << endl;
        return;
    }
    while(x+y<=n)
    {

        cout << x << " ";
        x = x + k;
        
    }
    
    cout << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void answer()
{
    int n,k;
    cin>>n>>k;
    int ans = 3 * n - k;
    if(ans<0){
        cout << 0 << endl;
        return;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    answer();
    // }
    return 0;
}

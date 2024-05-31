#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,c;
    cin>>n>>c;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int mini = *min_element(a, a + n);
    int mx = 0;
    for (int i = 1; i < n; i++)
    {
      
      mx = max(mx, a[i - 1] - a[i] - c);
    }

    cout << mx << endl;
    // if(indx-1>=0){
    // int ans = a[indx - 1] - a[indx]-c;

    // cout << ans << endl;
    // }
    // else{
    // cout << 0 << endl;
    // }
    
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
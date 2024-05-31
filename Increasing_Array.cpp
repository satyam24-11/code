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
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            ans += v[i-1] - v[i];
           // cout << ans << endl;
            v[i] = v[i-1];
        }
    }
    cout << ans << endl;
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
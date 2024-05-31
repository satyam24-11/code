#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
bool check(int x,int n){
    int res = (x * (x - 1)) / 2;
    if(res<=n)
        return true;
    return false;
}
void answer()
{
    int n;
    cin >> n;
    int l = 2, r =3e9;
    int x=2;
    while(l<=r){
        int mid = (l + r) / 2;
        if(check(mid,n)){
            //move right
            x=mid;
            l = mid + 1;
        }
        else{
            //move left
            r = mid - 1;
        }
    }
    int res=(x*(x-1))/2;
    int ans = x + (n - res);
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
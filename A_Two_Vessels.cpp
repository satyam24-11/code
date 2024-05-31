#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int a,b,c;
    cin >> a >> b >> c;
    // if(a==b){
    //     cout << 0 << endl;
    //     return;
    // }
    // int middle = 0;
    // if ((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0)){
    //     middle = ((a + b) / 2)+1;
    // }
    // else{
    //      middle = (a + b) / 2;
    // }
    // if(c>=middle){
    //      cout<< 1 << endl;
    //      return;
    // }
    // else {
    //      cout << (middle / c )-1<< endl;
    // }
    if(b>a){
        swap(a, b);
    }
    int ans = 0;
    while(a>b){
        a -= c;
        b += c;
        ans++;
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
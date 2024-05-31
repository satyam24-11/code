#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, v, x;
    cin >> n >> v >> x;
    int total = 0;
    int non_vip = v * 3;
    if(non_vip<=n){
        total+=non_vip*x;
    }
    else{
        total+=n*x;
    }
    int vip = (v+1) * x;
    total += vip;
    cout << total << endl;
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
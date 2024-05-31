#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int pre_ans = ceil((k * l) / nl);
   // cout << pre_ans << " ";
    int pre_ans1 = c * d;
   // cout << pre_ans1 << " ";
    int pre_ans2 = p / np;
   // cout << pre_ans2 << " ";
    int res1=min(pre_ans,pre_ans1);
    cout << min(res1, pre_ans2)/n << endl;
 }
     
     
int32_t main()
{
    make_fast;
    answer();
    return 0;
}
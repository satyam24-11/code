#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (min(n, x + 1) < k)
    {
        cout << -1 << endl;
        return;
    }
    int sum = 0;
    if(k==x){
        for (int i = 0; i < k - 1;i++){
            sum += i;
        }
        int len = n - k +1;
      //  cout << "case->" << len << endl;
        for (int i = 0; i < len;i++){
            sum += k - 1;
        }
        cout << sum << endl;
        return;
    }
    if(k!=x){
        for (int i = 0; i <= k - 1;i++){
            sum += i;
        }
        int len = n - k;
        //cout << "case->" << len << endl;
        for (int i = 0; i < len;i++){
            sum += x;
        }
        cout << sum << endl;
        return;
    }
   
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
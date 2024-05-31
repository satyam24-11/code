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
    while(n!=1){
        cout << n << " ";
        if(n%2==0){
            n /= 2;
        }
        else{
            n = n * 3 + 1;
        }
    }
    cout << 1 << endl;
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
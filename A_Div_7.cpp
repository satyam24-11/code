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
    int x=n%7;
    int ans = -1;
    if(x==0){
        cout << n << endl;
    }else {
        for (int i = 0; i < 10;i++){
            if((n-n%10+i)%7==0)
                ans = n - n % 10 + i;  
        }
        cout << ans << endl;
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
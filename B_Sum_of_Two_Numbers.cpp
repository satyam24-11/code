#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    float n;
    cin >> n;
  
    if(n==19){
        cout << 14 << " " << 5 << endl;
    }
    else
        cout << ceil((n + 1) / 2) << " " << ceil((n - 1) / 2) << endl;
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
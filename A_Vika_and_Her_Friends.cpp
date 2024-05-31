#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m, k;
    cin >> n >> m >> k;;
    int x, y;
    cin >> x >> y;
    int flag = 0;
    while(k--){
        int a, b;
        cin >> a >> b;
        int xa = abs(a - x);
        int yb = abs(b - y);
        if ((xa+yb)%2==0)
        {
            flag = 1;
        }
    }
    if(flag){
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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
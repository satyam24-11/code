#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int x, y;
    cin >> x >> y;
    int a,b;
    cin>>a>>b;
    b = min(b,a + a);
    if(x<y){
        swap(x,y);
    }
    cout << y * b + (x - y) * a << endl;
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
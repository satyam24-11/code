#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int maxi_1 = max((3 * a) / 10, (a - (a / 250) * c));
    int maxi_2 = max((3 * b) / 10, (b - (b / 250) * d));
    if(maxi_1>maxi_2){
        cout<<"Misha";
    }
    else if(maxi_1<maxi_2){
        cout<<"Vasya";
    }
    else{
        cout<<"Tie";
    }
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
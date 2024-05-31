#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m;
    cin >> n >> m;
    int count_one = 0;
    int count_two = 0;
    if(n<m){
        cout << -1 << endl;
    }
    else{
       int d=(n+2*m-1)/2;
       cout << d / m * m << endl;
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
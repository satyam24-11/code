#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
const int inf = 1e18;
const int N = 1e5 + 5;

void answer()
{
    int n, m;
    cin >> n >> m;
     if(m==0){
        cout<<n%10<<endl;

     }
     else {
        if(n%2==0){
            cout<<0<<endl;
        }
        else {
            cout<<5<<endl;
        }
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,d;
    cin >>n>> d;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n-1;i++){
        if(a[i+1]-a[i]<=d){
            cout << a[i+1] << endl;
            return;
        }
       
    }
    cout << -1 << endl;
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
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
    if(n<7){
        cout << "NO" << endl;
        return;
    }
    if(n==9){
        cout << "NO" << endl;
        return;
    }
    if(n%3==0){
        cout << "YES" << endl;
        cout << "1 4" <<" "<< n - 5 << endl;
    }
    else {
        cout << "YES" << endl;
        cout << "1 2"<< " " << n - 3 << endl;
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
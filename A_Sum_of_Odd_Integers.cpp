#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, k;
    cin >> n >> k;
    if(k*k>n){
        cout << "NO" << endl;
        return;
    }
    if(n%2==0){
        if(k%2==0){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    else{
        if(k%2==0){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
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
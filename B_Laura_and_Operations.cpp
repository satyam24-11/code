#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int a, b, c, x;
    cin >> a >> b >> c;
    if(c%2==b%2){
        cout << "1"<< " ";
    }else {
        cout << "0"<< " ";
    }
    if(a%2==c%2){
        cout << "1"<< " ";
    }
    else {
        cout << "0"<< " ";
    }
    if(a%2==b%2){
        cout << "1"<<endl;
    }
    else {
        cout << "0"<<endl;
    
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
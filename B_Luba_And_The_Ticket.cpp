#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    string s;
    cin >> s;
    int n = s.length();
    int sum = 0;
    for (int i = 0; i < 3;i++){
         sum += s[i];
    }
    int sum1 = 0;
    for (int i = 3; i < n;i++){
         sum1 += s[i];
    }
    if(sum==sum1){
         cout << "0" << endl;
    }
    else if(sum>sum1){
        
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
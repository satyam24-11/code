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
    int ans = 1;
    int count = 1;
    for (int i = 1; i < s.length();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        ans = max(ans, count);
    }
    cout << ans << endl;
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
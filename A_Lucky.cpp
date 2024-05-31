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
    int fs = 0;
    int ls = 0;
    for (int i = 0; i < 3;i++){
        fs += s[i] - '0';
    }
    for (int i = 3; i < 6;i++){
        ls += s[i] - '0';
    }
    if(fs==ls)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
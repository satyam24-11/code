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
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'y' && s[i] != 'o' && s[i] != 'u')
        {
            ans += '.';
            ans += s[i];
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    make_fast;
    // int t;
    // cin >> t;
    //while (t--)
    //{
        answer();
    //}
    return 0;
}
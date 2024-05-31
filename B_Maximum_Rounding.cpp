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
    // s = '0' + s;
    int inc = 0;
    bool flag = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '5')
        {
            flag = 1;
            if (i == 0)
            {
                s = '1' + s;
                inc = i + 1;
            }
            else
            {
                s[i - 1]++;
                inc = i;
            }
        }
    }
    if (flag == 1)
    {
        for (int i = inc; i <= s.length(); i++)
        {
            s[i] = '0';
        }
    }
    cout << s << endl;
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
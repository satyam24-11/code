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
    if ((n % 4 == 0) || (n % 7 == 0) || (n % 47 == 0) || (n % 74 == 0) || (n % 477 == 0))
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        string s = to_string(n);
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                count++;
            }
        }
        if (count == s.size())
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
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
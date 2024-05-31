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
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h')
        {
            count++;
            if (count > 1)
            {
                count-= 1;
            }
        }
        if (s[i] == 'e' && count == 1)
        {
            count++;
            continue;
            if (count > 1)
            {
                count -= 1;
            }
        }
        if (s[i] == 'l' && count == 2)
        {
            count++;
            continue;
            if (count > 1)
            {
                count -= 1;
            }
        }
        if (s[i] == 'l' && count == 3)
        {
            count++;
            continue;
            if (count > 1)
            {
                count -= 1;
            }
        }
        if (s[i] == 'o' && count == 4)
        {
            count++;
            continue;
            if (count > 1)
            {
                count -= 1;
            }
        }
        // cout << count << " ";
    }

    if (count > 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int32_t main()
{
    make_fast;
    //  int t;
    //  cin >> t;
    // while (t--)
    // {
    answer();
    // }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    string x;
    cin >> x;
    int z = x.size();
    int c = 0;
    stack<char> s;
    for (int i = 0; i < x.size(); i++)
    {
        s.push(x[i]);
    }
    while (!s.empty())
    {
        if (s.top() == ')')
        {
            c++;
            s.pop();
        }
        else
        {
            c--;
            if (c < 0)
            {
                z--;
                c = 0;
            }
            s.pop();
        }
    }
    cout << z - c;
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
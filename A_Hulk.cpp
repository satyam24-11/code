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
    string s;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s += "I hate ";
        }
        else
        {
            s += "I love ";
        }
        if (i != n - 1)
        {
            s += "that ";
        }
    }
    s += "it";
    cout << s << endl;
}
int32_t main()
{
    make_fast;
    answer();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
const int M = 109;
void answer()
{
   
}
int32_t main()
{
    make_fast;
    int t;
    cin >> t;
    while (t--)
    {
        //answer();
        int n;
        cin >> n;
        int s[M], e[M];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> e[i];
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] >= s[0] and e[i] >= e[0])
            {
               // flag = false;
               s[0] = -1;
            }
        }
        // if (!flag)
        // {
        //     puts("-1");
        //     continue;
        // }
        cout << s[0] << endl;
    }
    return 0;
}
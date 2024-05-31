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
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
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
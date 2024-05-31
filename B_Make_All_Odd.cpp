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
    int count_odd = 0;
    int count_even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
        {
            count_odd++;
        }
        else
        {
            count_even++;
        }
    }
    if (count_odd == 0)
    {
        cout << -1 << endl;
    }
   else
        cout << count_even << endl;
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
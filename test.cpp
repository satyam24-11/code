#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
void answer()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = n - 1;
    int sum = 0;
    bool check = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (n == 2)
    {
        cout << "Yes" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if ((2 * sum - v[i] - v[j]) % (cnt))
            {
                check = 1;
                break;
            }
        }
    }
    if (check)
    {
        cout << "No" << endl;
    }
    else
        cout << "Yes" << endl;
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

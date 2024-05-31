#include <bits/stdc++.h>
using namespace std;
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
    int n, k;
    cin >> n >> k;
    vector<int> a(2*n);
    for (int i = 0; i < (2*n); i++)
        cin >> a[i];
    vector<int> f(n), l, r;
    for (int i = 0; i < n; i++)
    {
        f[a[i] - 1] += 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 2)
            l.push_back(i + 1), l.push_back(i + 1);
        else if (f[i] == 0)
            r.push_back(i + 1), r.push_back(i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 1)
            l.push_back(i + 1), r.push_back(i + 1);
    }
    for (int i = 0; i < (2 * k); i++)
        cout << l[i] << ' ';
    cout << '\n';
    for (int i = 0; i < (2 * k); i++)
        cout << r[i] << ' ';
    cout << '\n';
}
signed main()
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

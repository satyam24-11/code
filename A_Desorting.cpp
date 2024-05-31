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
    int maxi = 1e10;
    int count_same = 0;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int un_sorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            count_same = 1;
          
        }
        if (v[i] > v[i + 1])
        {
            un_sorted = 1;
        }
        int c = abs(v[i] - v[i + 1]);
        maxi = min(maxi, c);
    }
    if (un_sorted == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (count_same == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << maxi / 2 + 1 << endl;
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
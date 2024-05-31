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
    vector<int> v(n);
    if (n == 3)
    {
        cout << "1 3 5" << endl;
        return;
    }
    v[0] = 10;
    v[1] = 11;
    for (int i = 2; i < n; i++)
    {
        v[i] = v[i - 1] + 1;
        while (3 * v[i] % (v[i - 1] + v[i - 2]) == 0)
        {
            v[i]++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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
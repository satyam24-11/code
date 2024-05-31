#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, a, q;
    cin >> n >> a >> q;
    string s;
    cin >> s;
    int sum = a;
    int total = 0;
    for (int i = 0; i < q; i++)
    {
        if (sum == n)
        {
            cout << "YES" << endl;
            return;
        }
        if (s[i] == '+')
        {
            sum++;
            total++;
        }
        else
            sum--;
    }
    if (sum == n)
    {
        cout << "YES" << endl;
        return;
    }
    int req = n - a;
    if (total >= req)
    {
        cout << "MAYBE" << endl;
        return;
    }
    cout << "NO" << endl;
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
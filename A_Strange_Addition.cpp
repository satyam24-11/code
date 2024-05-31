#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, c3 = 0, c4 = 0, c5 = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 100)
        {

            v.push_back(100);
        }
        else if (a == 0)
        {

            v.push_back(0);
        }
        else if (a % 10 == 0 && !c3)
        {
            c3 = 1;
            v.push_back(a);
        }
        else if (a > 0 && a < 10 && !c4)
        {
            c4 = 1;
            v.push_back(a);
        }
        else
        {
            c5 = a;
        }
    }
    if (c3 == 0 && c4 == 0 && c5 != 0)
    {
        v.push_back(c5);
    }
    cout << v.size() << endl;
    ;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
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
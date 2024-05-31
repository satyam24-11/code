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
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if (i == j)
                continue;
            int x = arr[i];
            int y = arr[i + 1];
            if (x > y)
                swap(x, y);
            int x2 = arr[j];
            int y2 = arr[j + 1];
            if (x2 > y2)
                swap(x2, y2);
            if (x > x2 && y > y2 && x < y2)
            {
                cout << "yes\n";
                return;
            }
            if (x2 > x && y2 > y && x2 < y)
            {
                cout << "yes\n";
                return;
            }
        }
    }
    cout << "no\n";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    int book_count = 0;
    int r = 0;
    for (int i = 0; i < n; ++i)
    {
        while (r < n && sum + a[r] <= t)
        {
            sum += a[r];
            r++;
        }
        book_count = max(book_count, r - i);
        sum -= a[i];
    }

    cout << book_count <<endl;
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
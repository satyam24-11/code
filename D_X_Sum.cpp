#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int now = 0;
            int ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                now += a[ci][cj];
                ci--;
                cj--;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                now += a[ci][cj];
                ci++;
                cj--;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                now += a[ci][cj];
                ci--;
                cj++;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                now += a[ci][cj];
                ci++;
                cj++;
            }
            now -= a[i][j] * 3;
            mx = max(mx, now);
        }
    }
    cout << mx << endl;
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
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
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 1;
    int mini = a[0]+1;
    int maxi = a[n - 1]+1;
    for (int i = 1; i < n;i++){
        ans *= a[i];
    }
    int res = 1;
    for (int i = 0; i < n - 1;i++){
        res *= a[i];
    }
    int ans1 = mini * ans;
    int ans2 = maxi * res;
    cout << max(ans1, ans2) << endl;
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
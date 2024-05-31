#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int i,n,k;
    cin >> n;
    int a[101];
    for (int i = 1; i <= n;i++){
        cin >> k;
        a[k] = i;
    }
    for (int i = 1; i <= n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int32_t main()
{
    make_fast;
    //  int t;
    //  cin >> t;
    // while (t--)
    // {
    answer();
    // }
    return 0;
}
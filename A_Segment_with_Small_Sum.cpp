#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int sum = 0;
    int ans = 0;
    int j = 0;
    for (int i = 0; i < n;i++){
        sum += arr[i];
        while(sum>s){
            sum -= arr[j];
            j++;
        }
        ans = max(ans, i - j + 1);
    }
    cout << ans << endl;
  
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
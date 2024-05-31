#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = a + b;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
        if(arr[i]==sum){
            cout << i + 1 << endl;
            break;
        }
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
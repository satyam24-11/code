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
    cin>>n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int count = 1;
    for (int i = 1; i < n;i++){
        if(a[i]==a[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count>(n+1)/2){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
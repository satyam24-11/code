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
    int count = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]==2){
            count++;
        }
    }
    int count_two = 0;
    int ans = -1;
    for (int i = 0; i < n;i++){
        if(a[i]==2){
            count_two++;
        }
        if(2* count_two ==count){
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
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

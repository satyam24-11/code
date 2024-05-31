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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int count_one = 0;
    int count_two = 0;
    int count_three = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==1)
            count_one++;
        else if(a[i]==2)
            count_two++;
        else
            count_three++;
    }
    if(count_one==0 || count_two==0 || count_three==0){
        cout << 0 << endl;
        return;
    }
    int ans = min(count_one, min(count_two, count_three));
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
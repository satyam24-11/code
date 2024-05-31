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
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
//     int pre[n];
//      pre[0] = v[0];
//     for (int i = 1; i < n;i++){
//         pre[i] = pre[i - 1] + v[i];
//     }
//     int suf[n];
//     suf[n - 1] = v[n - 1];
//     for (int i = n - 2; i >= 0;i--){
//         suf[i] = suf[i + 1] + v[i];
//     }
//     for(auto it: pre){
//         cout << it << " ";
//     }
//     cout << endl;
//     // for(auto it: suf){
//     //     cout << it << " ";
//     // }
//     // cout << endl;
//     int ans = 0;
//     for (int i = 0; i < n;i++){
//         if(pre[i]>0){
//             ans = max(ans, (pre[i]-suff[n-i]));
//         }
//     }
  
//    cout << ans << endl;
    vector<int>sub;
    for (int i = 1; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            sub.push_back(i);
        }
    }
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());
    int res = 0;
    res = max(res, maxi - mini);
    int sec_maxi = 0;
    int sec_mini = 0;
    for (int i = 1; i< sub.size(); i++)
    {
        int cnt = 0;
        int sum = 0;
        int idx = 0;
        while (idx <= n - 1)
        {
            int len = sub[i];
            while (len--)
            {
                sum += v[idx];
                idx++;
            }
            if (cnt == 0)
            {
                sec_maxi = sum;
                sec_mini = sum;
                cnt = 1;
            }
            else
            {
                sec_maxi = max(sec_maxi, sum);
                sec_mini= min(sec_mini, sum);
            }
            sum = 0;
        }
        int temp = sec_maxi - sec_mini;
        res = max(res, temp);
        sec_mini = 0;
        sec_maxi = 0;
    }
    cout << res << endl;
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
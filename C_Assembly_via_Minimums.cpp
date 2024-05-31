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
    int n1 = (n * (n - 1)) / 2;
    int x = 0;
    vector<int> v(n1), ans,ans2;
    for (int i = 0; i < n1; i++)
    {
        cin >> v[i];
         x = v[i];
    }
    sort(v.begin(), v.end());
    //    cout << "Sorted" << endl;
    // set<int> s;
    // for (int i = 0; i < n1; i++)
    // {
    //     s.insert(v[i]);
    // }
    // // for(auto it: s){
    // //     cout << it << " ";
    // // }
    // // cout << endl;
    // int now = s.size();
    // if (now == 1)
    // {
    //     for (int i = 0; i < n/2; i++)
    //     {
    //         ans.push_back(v[i]);
    //        // ans.push_back(v[i] + 1);
    //     }
    //     ans.resize(n, x);
    //     for (int i = 0; i < ans.size();i++){
    //         cout << ans[i] << " ";
    //     }
    //     cout << endl;
    // }
    // else {
    //     for (auto &it:s){
    //         ans2.push_back(it);
    //     }
    //     ans2.resize(n,x);
    //     for(auto it:ans2){
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < n1;i+=--n){
         cout << v[i] << " ";
    }
    cout << "1e9" << endl;
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
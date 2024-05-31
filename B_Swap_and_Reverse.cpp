#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    // int n,k;
    // cin >> n >> k;
    // string s;
    // cin>>s;
    // if(k%2==0){
    // sort(s.begin(), s.end());
    // cout << s << endl;
    // }
    // else{
    // string odd = "";
    // string even = "";
    // for (int i = 0; i < n;i++){
    //     if(i%2){
    //         even += s[i];
    //     }else {
    //         odd += s[i];
    //     }
    //  }
    //  for (int i = 0; i < odd.length();i++){
    //     sort(odd.begin(), odd.end());
    //     cout << odd[i];
    //  }
    //     for (int i = even.length() - 1; i >= 0;i--){
    //         sort(even.begin(), even.end());
    //         cout << even[i];
    //     }
    //  cout << endl;
    // }
    int n, k;
    cin >> n >> k;

    string strr;
    cin >> strr;

    if (k%2==0)
    {
        sort(strr.begin(), strr.end());
        cout << strr << endl;
        return;
    }
    int total = 26;
    vector<vector<int>> new_arr(total, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        new_arr[strr[i] - 'a'][i % 2]++;
    }

    string res= "";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < total; j++)
        {
            if (new_arr[j][i % 2] > 0)
            {
                new_arr[j][i % 2]--;
                res += (j + 'a');
                break;
            }
        }
    }
    cout << res << '\n';
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
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
    string s;
    cin >> s;
    vector<int> ans_idx;
    int change = 0;
    int key = 1;
    int pre = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            change++;
            ans_idx.push_back(i + 1);
        }
    }
    int len = n - change;
    for (int i = 0; i < ans_idx.size();i++){
        cout << ans_idx[i] - key + pre << " ";
        pre += ans_idx[i] - key;
        key ++ ;
    }
    for (int i = 0; i < len;i++){
        cout << -1 <<" ";
    }
    cout << endl;
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
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
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        if(v[i]==0)
            cnt++;
    }
    if(cnt>=1){
        cout << 0 << endl;
        return;
    }
    vector<int> pos;
    for (int i = 0; i < n;i++){
        if(v[i]>0){
            pos.push_back(v[i]);
        }
        else{
            pos.push_back(-v[i]);
        }
    }
    // for (int i = 0; i < pos.size();i++){
    //     cout << pos[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < neg.size(); i++)
    // {
    //     cout << neg[i] << " ";
    // }
    // cout << endl;
    // if(pos.size()==0){
    //     cout << neg[0] << endl;
    //     return;
    // }
    // if (neg.size() == 0){
    //     cout << pos[0] << endl;
    //     return;
    // }
    sort(pos.begin(), pos.end());
    cout << pos[0] << endl;
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
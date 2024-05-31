#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n),u_v;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        mpp[v[i]]++;
    }
    for(auto it: mpp){
        if(it.second>=k){
            u_v.push_back(it.first);
        }
    }
    // for (int i = 0; i < u_v.size();i++)
    // {
    //     cout << u_v[i] << " ";
    // }
    // cout << endl;
    if(u_v.size()==0){
        cout << -1 << endl;
        return;
    }
    sort(u_v.begin(), u_v.end());
    int mx = 0;
    int l_ans = 1;
    int r_ans = 1;
    int l = 1;
    for (int i = 1; i < u_v.size();i++){
        if(u_v[i]-1==u_v[i-1]){
            if(u_v[i]-l>mx){
                mx = u_v[i] - l;
                l_ans = l;
                r_ans = u_v[i];
            }
        }
        else{
            l = u_v[i];
        }
    }
    cout << l_ans << " " << r_ans << endl;
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
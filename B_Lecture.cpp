#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> v;
    while(m--){
        string s1,s2;
        cin>>s1>>s2;
        v.push_back({s1,s2});
    }
    vector<string>ans;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<v.size();j++){
            if(v[j].first==s){
                if(v[j].first.size()>v[j].second.size()){
                    s = v[j].second;
                }
            }
        }
        ans.push_back(s);
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    

    
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
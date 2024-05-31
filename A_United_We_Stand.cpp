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
    vector<int> v(n),v1,v2;
    map<int, int> mpp;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        mpp[v[i]]++;
    }
    if(mpp.size()==1){
        cout << "-1" << endl;
        return;
    }
    int maxi = *max_element(v.begin(), v.end());
    for (int i = 0; i < n;i++){
        if(maxi==v[i]){
            v1.push_back(maxi);
        }
        else{
            v2.push_back(v[i]);
        }
    }
    cout << v2.size() << " " << v1.size() << endl;
    for(auto it:v2){
        cout << it << " ";
    }
    for(auto it: v1){
        cout << it << " ";
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
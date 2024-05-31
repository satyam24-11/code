#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n),v1(m);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    for (int i = 0; i < m;i++){
        cin >> v1[i];
    }
    vector<int> res(m);
    int i = 0;
    for (int j = 0; j < m;j++){
        while(i<n && v[i]<v1[j]){
            i++;
        }
        cout<< i<<" ";
    }
    // for(auto it: res){
    //     cout << it << " ";
    // }
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
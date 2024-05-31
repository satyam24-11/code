#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
bool sorted(vector<int>&v){
    int ans = true;
    for (int i = 0; i < v.size()-1;i++){
        if(v[i]>=v[i+1]){
            ans = false;
            break;
        }
    }
    return ans;
}
void answer()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        
    }
    // for (int i = 1; i < n-1;i++){
    //     if(v[i-1]<v[i] &&v[i]>v[i+1]){
    //         swap(v[i], v[i + 1]);
    //     }
    // }
   
        if(v[0]!=1){
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;

        // if (sorted(v))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        //     cout << "NO" << endl;
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
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
    int v[n], v1[200000];
    // int count_even = 0, count_odd = 0;
    for (int i = 0; i < n;i++){
        cin>>v[i];
        v1[i] = v[i];
    }
    sort(v,v+n);
    // for (int i = 0; i < n-1;i++){
    //     if(v[i]==v[i+1]){
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    int flag = 1;
    for (int i = 0; i < n;i++){
        if(v1[i]%2!=v[i]%2){
            cout << "NO" << endl;
            flag = 0;
            return;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
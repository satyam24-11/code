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
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
//    if(a[0]!=n){
//         cout << "NO" << endl;
//         return;
//    }
//    vector<int> b(n);
//    int first = n - 1;
//    for (int i = 0; i < n;i++){
//         int val = i + 1;
//         while(a[first]<val){
//             first--;
//         }
//         b[i] = first + 1;
//    }
//    for (int i = 0; i < n;i++){
//     if(a[i]!=b[i]){
//             cout << "NO" << endl;
//             return;
//     }
//    }
//    cout << "YES" << endl;
    bool flag = true;
    for (int i = 0; i < n;i++){
        int num = a[i] - 1;
        int idx=num;
        if(idx>=n){
            flag = false;
        }
        else{
            if(a[idx]<i+1){
                flag = false;
            }
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
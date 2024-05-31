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
    vector<int> a(n);
    int sum = 0;
    int count_one = 0;
    // if(n==1){
    //     cout << "NO" << endl;
    //     return;
    // }
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        sum += x;
        if(x==1){
            count_one++;
        }
    }
    if(sum>=count_one+n && n>1){
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
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
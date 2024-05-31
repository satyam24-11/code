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
   // int a[n];
    int maxi = INT_MIN;
    vector<int> v(101, 0);
    for (int i = 0; i < n;i++){
        int a;
        cin >> a;
        maxi = max(maxi, a);
        v[a]++;
    }
    int count = 0;
    for (int i = 1; i <= maxi;i++){
        if(v[i-1]<v[i]){
            cout << "NO" << endl;
            count = 1;
            break;
        }
    }
    if(count==0)
        cout << "YES" << endl;
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
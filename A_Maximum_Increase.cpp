#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                       \
std::ios_base::sync_with_stdio(false);\
std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int count = 0;
    int maxi = 0;
    for (int i = 0;i<n-1;i++){
        if(a[i]<a[i+1]){
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    cout << maxi+1 << endl;
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
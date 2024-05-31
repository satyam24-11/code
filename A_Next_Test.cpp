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
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    sort(a,a+n);
    int count = 1;
    int ans = 1;
    for(int i=0;i<n;i++){
        if(a[i]==i+1){
            count++;
        }
        else {
            cout << count << endl;
            return;
        }
    }
    if(count==n){
        cout << n + 1 << endl;
    }
    else
        cout << count << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a + n);
    int maxi = INT_MIN;
    int cnt = 0;
    int i = 0;
    while(i<n){
       int j = i + 1;
       while(j<n){
           if(abs(a[j]-a[j-1])>k){
            break;
         }
         j++;
       }
         cnt=j-i;
         maxi = max(maxi,cnt);
         i = j;
    }
    cout<<n-maxi<<endl;
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
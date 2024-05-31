#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                       \
std::ios_base::sync_with_stdio(false);  \
std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
   int k,l,m,n,d;
   cin >> k >> l >> m >> n >> d;
    int ans=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
make_fast;
answer();
return 0;
}
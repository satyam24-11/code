#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int l,r;
    cin>>l>>r;
    if(l%2){
        l+=1;
    }
    if(l+2>r){
        cout<<-1;
    }
    else{
        cout<<l<<" "<<l+1<<" "<<l+2;
    }

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
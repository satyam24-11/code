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
    int count=2;
    int zero = 0;
    if(k==1){
        cout << n << endl;
    }
    else{
    for(int i=2;i<n;i++){
        if(ceil(i%k)==1){
            count++;
        }

    }

    cout << count << endl;
    }
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
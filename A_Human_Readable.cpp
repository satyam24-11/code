#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;

void answer()
{
    int m;
    cin>>m;
    if(m<1024){
        cout<<m<<"B"<<endl;
    }
    else if(m>=1024 && m<1048576){
        cout<<(m/1024)<<"KiB"<<endl;
    }
    else cout<< (m/1048576)<<"MiB"<<endl;
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